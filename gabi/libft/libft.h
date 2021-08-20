/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabi42 <gabi42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 17:30:46 by gsenra-a          #+#    #+#             */
/*   Updated: 2020/06/08 17:57:57 by gabi42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <ctype.h>
# include <limits.h>

/*
** STRUCT PARA FUNÇÕES BÔNUS
*/

typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

/*
** PRIMEIRA PARTE
*/

void				*ft_memset(void *b, int c, size_t len);

void				*ft_bzero(void *b, size_t n);

void				*ft_memcpy(void *dest, const void *src, size_t n);

void				*ft_memccpy(void *str_dest,
					const void *str_src, int c, size_t n);

void				*ft_memmove(void *dest, const void *src, size_t n);

void				*ft_memchr(const void *arr, int c, size_t n);

int					ft_memcmp(const void *s1, const void *s2, size_t n);

size_t				ft_strlen(const char *str);

size_t				ft_strlcpy(char *dest, const char *src, size_t size);

size_t				ft_strlcat(char *dest, const char *src, size_t size);

char				*ft_strchr(const char *str, int c);

char				*ft_strrchr(const char *str, int c);

char				*ft_strnstr(const char *haystack,
					const char *needle, size_t len);

int					ft_strncmp(const char *s1, const char *s2, size_t n);

int					ft_atoi(char *str);

int					ft_isalpha(int c);

int					ft_isdigit(int c);

int					ft_isalnum(int c);

int					ft_isascii(int c);

int					ft_isprint(int c);

int					ft_toupper(int c);

int					ft_tolower(int c);

void				*ft_calloc(size_t n, size_t size);

char				*ft_strdup(const char *str);

/*
** SEGUNDA PARTE
*/

char				*ft_substr(char const *s, unsigned int start, size_t len);

char				*ft_strjoin(char const *s1, char const *s2);

char				*ft_strtrim(char const *s1, char const *set);

char				**ft_split(char const *s, char c);

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));

char				*ft_itoa(int n);

void				ft_putchar_fd(char c, int fd);

void				ft_putstr_fd(char *s, int fd);

void				ft_putendl_fd(char *s, int fd);

void				ft_putnbr_fd(int n, int fd);

int					ft_strncmp_uns(unsigned char *s1, const char *s2, size_t n);

int					ft_strlen_uns(unsigned char *is);

unsigned char		*ft_strdup_uns(unsigned char *is);

/*
** BONUS
*/

t_list				*ft_lstnew(void *content);

void				ft_lstadd_front(t_list **lst, t_list *new);

int					ft_lstsize(t_list *lst);

t_list				*ft_lstlast(t_list *lst);

void				ft_lstadd_back(t_list **lst, t_list *new);

void				ft_lstdelone(t_list *lst, void (*del)(void*));

void				ft_lstclear(t_list **lst, void (*del)(void*));

void				ft_lstiter(t_list *lst, void (*f)(void *));

t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
					void (*del)(void *));

#endif
