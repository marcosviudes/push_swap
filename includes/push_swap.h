#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <libft.h>
# include "utils.h"
# include "get_next_line.h"

# define CHUNK_100	5
# define CHUNK_200	11

typedef struct s_min
{
	int		list_len;
	int		min;
	int		pos;
}				t_min;

typedef struct s_data
{
	t_list		*first;
	int			count;
	int			avg;
	int			min;
	int			max;
	t_min		mindata;
}				t_data;

typedef struct s_all{
	t_list	*a;
	t_list	*b;
	t_data	*adata;
	t_data	*bdata;
	int		*arr;
	int		init_len;
	int		i;
	int		*instruction;

}				t_all;

void	push_maxof3b(t_all *all);
void	get_minmax(t_data *data, t_list *list);
int		get_average(t_list	*list);
void	get_data_algorithm(t_data *data, t_list *list);
void	solve_three(t_all *all);
int		*int_array(t_list *list);
void	order_int(int	*arr, int size);
int		search_next_item(t_list *st_a, int len_a, int len_chunk);
void	set_int_arrtolst(t_list **list, int *arr, int size);
int		get_max_pos(t_list **stack);
int		search_next_greater(t_list *st_b, int max);
void	return_greater_to_a(t_list **st_a, t_list **st_b);
void	solve_hundred_less(t_all *all);
void	push_minb(t_all *all);
void	push_minmaxb(t_all *all);
void	solve_five_less(t_all *all);
void	copy_arr_to_list(int *aux, t_list *temp);
void	solve_three(t_all *all);
void	sort_algorithm(t_all *all);
void	free_list(t_list *list);

#endif
