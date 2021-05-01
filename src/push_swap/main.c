#include <push_swap.h>
#include <utils.h>
#include <libft.h>
#include <limits.h>

void	ft_doinstruction(int instruction, t_all *all){
	if(instruction == KEY_SA)
		ft_dosa(&all->a, &all->b, 1);
	if(instruction == KEY_SB)
		ft_dosb(&all->a, &all->b, 1);
	if(instruction == KEY_SS)
		ft_doss(&all->a, &all->b, 1);
	if(instruction == KEY_PA)
		ft_dopa(&all->a, &all->b, 1);
	if(instruction == KEY_PB)
		ft_dopb(&all->a, &all->b, 1);
	if(instruction == KEY_RA)
		ft_dora(&all->a, &all->b, 1);
	if(instruction == KEY_RB)
		ft_dorb(&all->a, &all->b, 1);
	if(instruction == KEY_RR)
		ft_dorr(&all->a, &all->b, 1);
	if(instruction == KEY_RRA)
		ft_dorra(&all->a, &all->b, 1);
	if(instruction == KEY_RRB)
		ft_dorrb(&all->a, &all->b, 1);
	if(instruction == KEY_RRR)
		ft_dorrr(&all->a, &all->b, 1);
}

void	get_minmax(t_data *data, t_list *list)
{
	int num;

	data->min = INT_MAX;
	data->max = INT_MIN;
	while(list)
	{
		num = ft_ptoint(list->content);
		if(num < data->min)
			data->min = num;
		if(num > data->max)
			data->max = num;
		list = list->next;
	}
}

int		get_average(t_list	*list)
{
	int		sum;
	int		count;
	float	avg;

	sum = 0;
	count = 0;
	while(list)
	{
		sum += ft_ptoint(list->content);
		count++;
		list = list->next;
	}
	avg = sum/count;
	return((int)avg);
}
int		count_lessmed(t_list *list, int med)
{
	int		i;

	i = 0;
	while(list->next != NULL)
	{
		if((*(int*)list->content) < med)
			i++;
		list = list->next;
	}
	return (i);
}
int	init_algorithm(t_all *all)
{
	int		i;
	int		ret;
	int		med;
	int		j;

	i = all->init_len;
	med = (all->adata->min + all->adata->max)/2;
	j = count_lessmed(all->a, med) + 1;
	ret = 0;
	while(i-- != 0 && j != 0)
	{
		if((*(int*)all->a->content) < med)
		{
			ft_dopb(&all->a, &all->b, 1);
			j--;
			ret++;
		}
		else
		{
			ft_dora(&all->a, &all->b, 1);
			//j--;
		}
	}
	return(ret);
	ft_lstprint(all->a, all->b);
}
void	get_data_algorithm(t_data *data, t_list *list)
{
	data->avg = get_average(list);
	get_minmax(data, list);
	/*printf("A data:\
			\n\taverage : %i\
			\n\tmin :	  %i\
			\n\tmax :	  %i",\
		all->adata->avg, all->adata->min, all->adata->max);*/
}

t_min	get_min_pos(t_list *list, t_min old)
{
	t_min	data;
	int		i;

	data.pos = 0;
	i = 1;
	data.min = INT_MAX;
	data.list_len = old.list_len;
	while(list->next != NULL && old.list_len--)
	{
		if ((*(int*)list->content) < data.min)
		{
			data.pos = i;
			data.min = *(int*)list->content;
		}
		list = list->next;
		i++;
	}
	return (data);
}

void	push_b_to_order(t_all *all, int low, int high, int count)
{
	int	i;
	
	i = 0;
	while (i <= (all->init_len - 1) && count > 0)
	{
		if ((*(int*)all->a->content) >= low && (*(int*)all->a->content) <= high)
		{
			ft_dopb(&all->a, &all->b, 1);
			count--;
		}
		else
		{
			ft_dora(&all->a, &all->b, 1);
		}
		i++;
	}
	//while (all->b)
	//	order_b(all);
}
/*
order_chunk(t_list *dst, t_list *src, int count){}*/
//////////////
int		*int_array(t_list *list)
{
	int *arr;
	int	lst_len;
	int	i;

	i = 0;
	lst_len = ft_lstsize(list);
	arr = malloc(sizeof(int) * lst_len);
	while(list != NULL)
	{
		arr[i] = *(int*)list->content;
		i++;
		list = list->next;
	}
	return(arr);
}
void	order_int(int	*arr, int size)
{
	int i, j, min_idx;

	i = 0;
	while(i < size - 1)
	{
		min_idx = i;
		j = i +1;
		while(j < size)
		{
			if (arr[j] < arr[min_idx])
				min_idx = j;
			j++;
		}
		ft_swap(&arr[min_idx], &arr[i]);
		i++;
	}
	i = 0;
}

int	search_next_item(t_list *st_a, int len_a, int len_chunk)
{
	t_list	*aux;
	int		pos;

	aux = st_a;
	pos = 0;
	while (aux != NULL)
	{
		if (aux->pos >= (len_a - len_chunk))
		{
			if (pos >= (len_a / 2))
				return (1);
		}
		pos++;
		aux = aux->next;
	}
	return (0);
}

void	create_chunk(t_list **a, t_list **b, int chunks)
{
	int	len_a;
	int	len_b;

	len_a = ft_lstsize(*a) - 1;
	len_b = ft_lstsize(*b);
	while (ft_lstsize(*b) - len_b <= (len_a / chunks))
	{
		if ((*a)->pos >= (len_a - (len_a / chunks)))
			ft_dopb(b, a, 0);
		else
		{
			if (search_next_item(*a, len_a, (len_a / chunks)) == 0)
			{
				while ((*a)->pos < (len_a - (len_a / chunks)))
					ft_dora(a,b, 0);
			}
			else
				while ((*a)->pos < (len_a - (len_a / chunks)))
					ft_dorra(a,b, 0);
		}
	}
}

void	solve_hundred_less(t_all *all)
{
	int	chunks;

	while (ft_lstsize(all->a) >= 5)
	{
		if (ft_lstsize(all->a) >= 200)
			chunks = 11;
		else
			chunks = 5;
		create_chunk(&all->a, &all->b, chunks);
	}
	while (all->a->pos != 3)
		ft_dora(&all->a, &all->b, 0);
	ft_dopb(&all->a,  &all->b, 0);
	solve_three(all);
	//return_greater_to_a(a, b);
	while (!ft_issorted(all->a))
		ft_dorra(&all->a,  &all->b, 0);
}
/*
void	solve_hundred_less(t_all *all)
{
	
	return;
}*/
void	push_minb(t_all *all)
{
	int		i;

	i = all->adata->count;
	while(i --> 0)
	{
		if(all->adata->min == *(int*)all->a->content)
		{
			ft_dopb(&all->a, &all->b, 1);
			return;
		}
		ft_dora(&all->a, &all->b, 1);
	}
}
void	push_minmaxb(t_all *all)
{
	int		i;
	int		flag;

	flag = 0;
	i = all->adata->count;
	while(i --> 0)
	{
		if(flag == 2)
			return;
		if(all->adata->min == *(int*)all->a->content)
		{
			ft_dopb(&all->a, &all->b, 1);
			flag++;
		}
		else if(all->adata->max == *(int*)all->a->content)
		{
			ft_dopb(&all->a, &all->b, 1);
			flag++;
		}
		else
			ft_dora(&all->a, &all->b, 1);
	}
}
void	solve_five_less(t_all *all)
{
	if(all->init_len == 4)
	{
		push_minb(all);
		solve_three(all);
		ft_dopa(&all->a, &all->b, 1);
		return;
	}
	if(all->init_len == 5)
	{
		push_minmaxb(all);
		if(*(int*)all->b->content < *(int*)all->b->next->content)
			ft_dosb(&all->a, &all->b, 1);
		solve_three(all);
		ft_dopa(&all->a, &all->b, 1);
		ft_dora(&all->a, &all->b, 1);
		ft_dopa(&all->a, &all->b, 1);
		return;
	}
}
void	solve_three(t_all *all)
{
	int		aux[3];
	t_list *temp;
	int		i;

	temp = all->a;
	i = 0;
	while(i < 3)
	{
			aux[i] = *(int*)temp->content;
				temp = temp->next;
			i++;
	}
	if(aux[0] < aux[1] && aux[1] < aux[2])
		return;
	if(aux[0] > aux[1])
	{
		if(aux[1] > aux[2])
		{
			ft_dosa(&all->a, &all->b, 1);
			ft_dorra(&all->a, &all->b, 1);
		}
		else if(aux[2] > aux[0])
			ft_dosa(&all->a, &all->b, 1);
		else 
			ft_dora(&all->a, &all->b, 1);
	}
	else if(aux[0] > aux[2])
			ft_dorra(&all->a, &all->b, 1);
	else
		{
			ft_dosa(&all->a, &all->b, 1);
			ft_dora(&all->a, &all->b, 1);
		}
}

void	sort_algorithm(t_all *all)
{
	if(all->init_len == 1)
		return;
	if(!ft_issorted(all->a))
	{
		if(all->init_len == 2)
			ft_dosa(&all->a, &all->b, 1);
		else if(all->init_len == 3)
			solve_three(all);
		else if(all->init_len <= 5)
			solve_five_less(all);
		else if(all->init_len <= 100)
			solve_hundred_less(all);
	}
}


int     main(int argc, char **argv)
{
	int		i;
	t_all	all;
	
	if(argc < 2)
		return(0);
	all.a = get_args(argc,argv);
	/*while (all.a)
	{
		printf("A[%i]: %i\n", i, *(int*)all.a->content);
		all.a = all.a->next;
	}*/
	all.init_len = ft_lstsize(all.a);
	all.b=NULL;
	all.adata = ft_calloc(1, sizeof(t_data));
	all.bdata = ft_calloc(1, sizeof(t_data));
	all.i = 0;
	all.adata->count = all.init_len;
	all.instruction = malloc(sizeof(int) * (argc - 1));
//	ft_lstprint(all.a, all.b);
	get_data_algorithm((all).adata, (all).a);
	sort_algorithm(&all);
//	ft_lstprint(all.a, all.b);
	return (0);
}