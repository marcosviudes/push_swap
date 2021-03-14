#include "../utils/stacklib.h"
#include "../../libft/libft.h"

int ft_ptoint(int *p)
{
	long int n;
	n = *p;
	return(n);
}
void	ft_lstprint(t_list	*head)
{
	int valor;

	 while(head != NULL){
		valor = ft_ptoint(head->content);
        printf("%4d",valor);
        head = head->next;
		}
}
void	add_content(t_list *list, int value)
{
	int		*i;

	i = malloc(sizeof(int));
	*i = value;
	list->content = &i;
	return;
}
int		getcontent(t_list *list)
{
	int	ret;
	int	*p;

	p = list->content;
	ret = *p;
	return(ret);
}
int		main(int argc, char **argv)
{
	void		*head_a;
	void		*head_b;
	t_list		*a;
	t_list		*b;
	int			*content;
	int			*content2;
	int			i;
	int			p;
	int			q;

	head_a = a;
	head_b = b;
	content = malloc(sizeof(int*) * argc);
	content2 = malloc(sizeof(int*) * argc);
	a->next = NULL;
	i = 1;
	if(argc != 1){
		while(i < argc){
				a->next = NULL;
				ft_lstnew(a);
				add_content(a, atoi(argv[i]));
				printf("%d\n", getcontent(a->content));
				//b = ft_lstnew(&(content2[i]));
			i++;
		}
		ft_lstprint(a);/*
		printf("_________________");
	i = 1;
	a = head_a;
	b = head_b;
	while(i < argc){
		p = ft_ptoint(a->content);
		q = ft_ptoint(b->content);
		printf("%d\t|\t%d\n", p, q);
		i++;
	}*/
	}
	return(0);
}