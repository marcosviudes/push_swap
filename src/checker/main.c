#include "../../includes/checker.h"
#include "../../libft/libft.h"
int ft_ptoint(int *p)
{
	long int n;
	n = *p;
	return(n);
}

void	add_content(t_list *list, int value)
{
	int		*i;

	i = malloc(sizeof(int));
	*i = value;
	list->content = &i;
	return;
}

t_list		*get_args(int argc, char **argv)
{
	int		i;
	int		value;
	t_list	*temp;

	i = 1;
	while(argv[i])
	{
		temp = ft_lstnew(0);
		if(!ft_isnum(argv[i]))
			return(NULL);
		value = ft_atoi(argv[i]);
		add_content(temp, value);
		i++;
	}
	return(temp);
}

void	free_all(t_all *all)
{
	return;
}
int     main(int argc, char **argv)
{
	t_all	all;
	int		content_a;

	if(argc > 1)
	{
		all.a = get_args(argc, argv);
		while(all.a)
		{
			content_a = ft_ptoint(all.a->content);
			printf("%d  ", content_a);
			all.a = all.a->next;
		}
	}
	return (0);
}