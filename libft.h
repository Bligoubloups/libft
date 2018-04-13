/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonett <mleonett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 16:50:20 by mleonett          #+#    #+#             */
/*   Updated: 2018/04/06 13:52:00 by mleonett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# define SEPARATOR(x) ((9 <= x && x <= 13) || x == ' ')
# define SPACE(x) (x == ' ' || x == '\n' || x == '\t')

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

size_t				ft_strlen(const char *s);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
int					ft_atoi(const char *str);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
int					ft_tolower(int c);
int					ft_toupper(int c);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memset(void *b, int c, size_t len);
void				*ft_memchr(const void *s, int c, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strdup(const char *s1);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strstr(const char *big, const char *little);
char				*ft_strncat(char *s1, const char *s2, size_t n);
char				*ft_strncpy(char *dst, const char *src, size_t len);
char				*ft_strnstr(const char *big, const char *little,
						size_t len);
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_itoa(int n);
char				*ft_strnew(size_t size);
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s);
char				**ft_strsplit(char const *s, char c);
void				ft_putnbr(int n);
void				ft_putstr(char const *s);
void				ft_memdel(void **ap);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
void				ft_putchar(char c);
void				ft_striter(char *s, void (*f)(char *));
void				ft_putendl(char const *s);
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
void				ft_putstr_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);
void				ft_putchar_fd(char c, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				*ft_memalloc(size_t size);
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstaddback(t_list **alst, t_list *new);
void				*ft_memrcpy(void *dst, const void *src, size_t n);
int					ft_isblank(int c);
int					ft_islower(int c);
int					ft_isspace(int c);
int					ft_isupper(int c);
int					ft_str_isalnum(char *str);
int					ft_str_isalpha(char *str);
int					ft_str_isascii(char *str);
int					ft_str_isdigit(char *str);
int					ft_str_islower(char *str);
int					ft_str_isprint(char *str);
int					ft_str_isupper(char *str);
char				*ft_str_tolower(char *str);
char				*ft_str_toupper(char *str);
char				*ft_itoa_base(int nb, char *base);
int					ft_atoi_base(char *nb, char *base);
int					ft_lstsize(t_list *begin_list);
void				ft_lstrev(t_list **begin_list);
void				ft_lstsort(t_list **begin_list, int (*cmp)());
void				ft_lstmerge(t_list **begin_list1, t_list *begin_list2);
void				ft_lstdelif(t_list **begin_list, void *data_ref,
						int (*cmp)());
void				ft_lstiterif(t_list *begin_list, void (*f)(void *),
						void *data_ref, int (*cmp)());
t_list				*ft_lstlast(t_list *begin_list);
t_list				*ft_lstfind(t_list *begin_list, void *data_ref,
						int (*cmp)());
t_list				*ft_lstat(t_list *begin_list, unsigned int nbr);

#endif
