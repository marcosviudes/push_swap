/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviudes <mviudes@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 13:21:15 by mviudes           #+#    #+#             */
/*   Updated: 2021/03/18 13:21:15 by mviudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	printf(ERROR);
	exit(EXIT_FAILURE);
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
	printf("\n_________________");
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
//		return(NULL);
	return(ret);
}
int		is_sorted(t_list *lst)
{
	int		number;
	int		last_num;

	last_num = INT64_MIN;
	while(lst != NULL)
	{
		number = ptoint(lst->content);
		if(number >= last_num)
			return(0);
		last_num = number;
		lst = lst->next;
	}
	return(1);
}
int		check_all(t_all *all)
{
	if(!is_sorted)



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
	int		i;

	int		fd;
	fd = open("./test.txt",O_RDONLY);
	head = &(all).a;
	all.init_len = argc - 1;
	i = 0;
	if(argc > 1)
	{
		all.a = get_args(argc, argv);
		if(!all.a)
			exit_error();
		while(get_next_line(fd, &buff) > EOF)//get_next_line(STDIN_FILENO, &buff))
		{
			printf("%s  ", buff);
			if(!valid_instruction(buff))
				exit_error();
			
		}
		if(!check_all(&all))
		{
			pritnf(KO);
		return(0);
	}
	ft_lstprint(all.a, all.b);
	return (0);
}
