#include "../utils/stacklib.h"
#include "../../libft/libft.h"

int ft_ptoint(int *p)
{
	long int n;
	n = *p;
	return(n);
}

int		main(int argc, char **argv)
{
	void		*head;
	t_list		*a;
	t_list		*b;
	int			*content;
	int			i;
	void		*p;

	head = NULL;
	a->next = NULL;
	content = malloc(sizeof(int*) * argc);
	a = malloc(sizeof(t_list));
	head = a;
	i = 1;
	if(argc != 1)
		while(i < argc){
				content[i] = ft_atoi(argv[i]);
				a = ft_lstnew(&(content[i]));
				p = a->content;
				printf("%d\n", ft_ptoint(p));
				a = a->next;
			i++;
		}

	return(0);
}