/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviudes <mviudes@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 19:42:25 by mviudes           #+#    #+#             */
/*   Updated: 2021/04/29 21:03:15 by mviudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int					ft_atoi(const char *str);
void				ft_bzero(void *str, int n);
void				*ft_calloc(size_t num, size_t size);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
void				*ft_memchr(const void *str, int c, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memcpy(void *str1, const void *str2, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memset(void *str, int c, size_t n);
char				*ft_strchr(const char *str, int c);
char				*ft_strcpy(char *dest, char *src);
char				*ft_strdup(const char *src);
size_t				ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t				ft_strlcpy(char *dest, const char *src, size_t n);
size_t				ft_strlen(const char *str);
size_t				ft_strnlen(const char *s, size_t maxlen);
int					ft_strncmp(const char *str1, const char *str2, size_t n);
char				*ft_strnstr(const char *haystack, const char *needle,
					size_t len);
char				*ft_strrchr(const char *str, int c);
int					ft_tolower(int c);
int					ft_toupper(int c);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s1, char const *set);
char				**ft_split(char const *s, char c);
char				*ft_itoa(int n);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd (int n, int fd);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
t_list				*ft_lstnew(void const *content);
t_list				*ft_lstlast(t_list *lst);
void				ft_lstadd_front(t_list **alst, t_list *new);
int					ft_lstsize(t_list *lst);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstdelone(t_list *lst, void (*del)(void*));
void				ft_lstclear(t_list **lst, void(*del)(void*));
void				ft_lstiter(t_list *lst, void (*f)(void*));
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
					void (*del)(void *));
int					ft_isnum(char *string);
char				*ft_strcdup(const char *src, int c);
int					ft_lstswap(t_list *lst_a, t_list *lst_b);
void				ft_lstnswap(t_list *node, int pos1, int pos2);
int					ft_lstpush(t_list **to_list, t_list **list);
void				*ft_lstpop(t_list **list);
int					ft_lstfswap(t_list **list);
void				ft_lstdelfirst(t_list **list);
void				ft_lstrot(t_list **list);
int    				ft_lstrevrot(t_list **list);
void    			ft_lstdellast(t_list **list);
void				ft_swap(int* src, int* dest);
#endif
