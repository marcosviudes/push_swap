#include "stacklib.h"

// a y b
// si no hay b no hace nada
//pone el primero de b en a

void	ft_lstprint_test(t_list	*a, t_list *b)
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

int		ft_lstpush(t_list **dest, t_list **src)
{
	t_list	*temp;

	if(src != NULL){
		printf("hasta aqui entro");
		temp = src;
		src = (*src)->next;
		temp->next = *dest;
		*dest = temp;
		ft_lstprint_test(*dest,src);

        return(1);
	}
	return(0);
}