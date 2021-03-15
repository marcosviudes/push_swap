#include "../utils/stacklib.h"
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

	printf("_________________");
	printf("\n");
	while(a != NULL || b != NULL)
	{
		if(a){
			content_a = getcontent(a);
			a = a->next;
		}
		if(b){
			content_b = getcontent(b);
			b = b->next;
		}
		printf("%d\t|\t%d\n", content_a, content_a);
	}

}

int		main(int argc, char **argv)
{
	t_list		*a;
	t_list		*b;
	t_list		*temp;
	t_list		*temp2;
	int			*content;
	int			*content2;
	int			i;

	a = NULL;
	b = NULL;
	content = malloc(sizeof(int*) * argc);
	content2 = malloc(sizeof(int*) * argc);
	i = 1;
	if(argc != 1){
		while(i < argc){
				content[i]= 1;//ft_atoi(argv[i]);
				content2[i]= 0;//(ft_atoi(argv[i]) + 10 );
				temp = ft_lstnew(&content[i]);
				temp2 = ft_lstnew(&content2[i]);
				ft_lstadd_back(&a, temp);
				ft_lstadd_back(&b, temp2);
				printf("%d\t|\t%d\n", getcontent(temp), getcontent(temp2));
			i++;
		}
	ft_lstpush(&a, &b);
	ft_lstprint(a, b);
	/*i = 1;
	while(i < argc){
		p = ft_ptoint(a->content);
		q = ft_ptoint(b->content);
		printf("%d\t|\t%d\n", p, q);
		i++;
	}*/
	}
	return(0);
}