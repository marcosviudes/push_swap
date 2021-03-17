#include "../../includes/checker.h"
#include "../../includes/get_next_line.h"
#include "../../libft/libft.h"

int		valid_instruction(char *line)
{
	if(ft_strncmp(line, "sa", 3) == 0)
		return (1);
	else if(ft_strncmp(line, "sb", 3) == 0)
		return (1);
	else if(ft_strncmp(line, "ss", 3) == 0)
		return (1);
	else if(ft_strncmp(line, "pa", 3) == 0)
		return (1);
	else if(ft_strncmp(line, "pb", 3) == 0)
		return (1);
	else if(ft_strncmp(line, "ra", 3) == 0)
		return (1);
	else if(ft_strncmp(line, "rb", 3) == 0)
		return (1);
	else if(ft_strncmp(line, "rr", 3) == 0)
		return (1);
	else if(ft_strncmp(line, "rra", 4) == 0)
		return (1);
	else if(ft_strncmp(line, "rrb", 4) == 0)
		return (1);
	else if(ft_strncmp(line, "rrr", 4) == 0)
		return (1);
	return(0);
}
void	exit_error()
{
	printf(KO);
	exit(1);
}

void	print_array(int *array, int size)
{
	int	i;

	i = 0;
	while(i < size)
	{
		printf("%d ", array[i]);
		i++;
	}
}
int ft_ptoint(int *p)
{
	long int n;
	n = *p;
	return(n);
}
int		getcontent(t_list *list)
{
	int	ret;
	int	*p;

	p = list->content;
	ret = *p;
	return(ret);
}
void	ft_lstprint(t_list	*a, t_list *b)
{
	int	content_a;
	int	content_b;
	int	i;

	i = 0;
	printf("_________________");
	printf("\n");
	while(a != NULL || b != NULL)
	{
		content_a = 0;
		content_b = 0;
		if(a){
			content_a = getcontent(a);
			a = a->next;
		}
		if(b){
			content_b = getcontent(b);
			b = b->next;
		}
		i++;
		printf("%3i-> %d\t|\t%d\n",i, content_a, content_b);
	}
}
int			check_duplicate(int	*numbers, int size)
{
	int		i;
	int		j;
	int		*doubles;

	doubles = ft_calloc(sizeof(numbers),1);
	i = 0;
	while(i < size)
	{
		doubles[i] = numbers[i];
		j = 0;
		while(j < size)
		{
			if(numbers[i] == doubles[j])

			j++;
		}
		i++;
	}
	return 0;
}
t_list		*get_args(int argc, char **argv)
{
	int		i;
	int		*value;
	t_list	*ret;
	t_list	*temp;

	i = 1;
	ret = NULL;
	value = malloc(sizeof(int) * argc);
	while(argv[i])
	{
		if(!ft_isnum(argv[i]))
			return(NULL);
		value[i] = ft_atoi(argv[i]);
		temp = ft_lstnew(&value[i]);
		ft_lstadd_back(&ret, temp);
		i++;
	}
//	if(!check_duplicate(&value[1], argc))
//		return(NULL);;
	return(ret);
}

void	free_all(t_all *all)
{
	return;
}
int     main(int argc, char **argv)
{
	t_all	all;
	int		content_a;
	void	*head;
	char	*buff;

	head = &(all).a;
	if(argc > 1)
	{
		all.a = get_args(argc, argv);
		if(!all.a)
			exit_error();
		while(get_next_line(0, &buff))
		{
			printf("%s", buff);
		}
	}
	ft_lstprint(all.a, all.b);
	return (0);
}
