/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sverkart <sverkart@msk.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 00:12:51 by sverkart          #+#    #+#             */
/*   Updated: 2020/05/22 04:32:22 by sverkart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stddef.h>
# include <ctype.h>

typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int					ft_atoi(const char *str);
int					ft_memcmp(const void *arr1, const void *arr2, size_t len);
int					ft_strncmp(const char *str1, const char *str2, size_t n);
int					ft_isprint(int n);
int					ft_isascii(int n);
int					ft_isalnum(int n);
int					ft_isalpha(int n);
int					ft_isdigit(int n);
int					ft_tolower(int n);
int					ft_toupper(int n);
char				*ft_strdup(const char *s1);
char				*ft_strnstr(const char *str, const char *s, size_t len);
char				*ft_strchr(const char *str, int ch);
char				*ft_strrchr(const char *str, int ch);
size_t				ft_strlen(const char *str);
size_t				ft_strlcpy(char *dest, char *src, size_t size);
size_t				ft_strlcat(char *dest, const char *src, size_t size);
void				*ft_calloc(size_t str, size_t size);
void				ft_bzero(void *str, size_t len);
void				*ft_memchr(const void *arr, int c, size_t len);
void				*ft_memmove(void *dest, const void *src, size_t len);
void				*ft_memset(void *dest, int c, size_t len);
void				*ft_memcpy(void *dest, const void *src, size_t len);
void				*ft_memccpy(void *dest, const void *src, int c, size_t len);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s1, char const *set);
char				**ft_split(char const *s, char c);
char				*ft_itoa(int n);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
int					ft_lstsize(t_list *lst);
void				ft_lstadd_front(t_list **lst, t_list *new);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstiter(t_list *lst, void (*f)(void *));
t_list				*ft_lstnew(void *content);
t_list				*ft_lstlast(t_list *lst);
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *), \
					void (*del)(void *));

#endif
