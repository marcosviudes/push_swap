#include <push_swap.h>
#include <utils.h>
#include <libft.h>
#include <limits.h>

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
	if(aux[0] > aux[1])
	{
		if(aux[1] > aux[2])
		{
			ft_dosa(&all->a);
			ft_dorra(&all->a);
		}
		else if(aux[2] > aux[0])
			ft_dosa(&all->a);
		else 
			ft_dora(&all->a);
	}
	else if(aux[0] > aux[2])
			ft_dorra(&all->a);
	else
		{
			ft_dosa(&all->a);
			ft_dora(&all->a);
		}
	return;
}

void	sort_algorithm(t_all *all)
{
	if(all->init_len == 1)
		return;
	if(!ft_issorted(all->a))
	{
		if(all->init_len == 2)
			ft_dosa(&all->a);
		else if(all->init_len == 3)
			solve_three(all);
	}
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
void	init_algorithm(t_all *all)
{
	all->adata.avg = get_average(all->a);
	get_minmax(&all->adata, all->a);
	printf("A data:\
			\n\taverage : %i\
			\n\tmin :	  %i\
			\n\tmax :	  %i",\
		all->adata.avg, all->adata.min, all->adata.max);
}
int     main(int argc, char **argv)
{
	int		i;
	t_all	all;
	
	if(argc < 2)
		return(0);
	all.a = get_args(argc,argv);
	all.init_len = ft_lstsize(all.a);
	all.b = ft_calloc(1, sizeof(t_list));
	all.i = 0;
	all.instruction = malloc(sizeof(int) * (argc - 1));
	ft_lstprint(all.a, all.b);
	init_algorithm(&all);
	sort_algorithm(&all);
	ft_lstprint(all.a, all.b);
	return (0);
}