#include "stacklib.h"

void	stack_sa(t_stack *a)
{
	t_stack *temp;

	temp = a;
	a = temp;
	return;
}

void	stack_sb(t_stack *a)
{
	t_stack *temp;

	temp = a;
	a = temp;
	return;
}