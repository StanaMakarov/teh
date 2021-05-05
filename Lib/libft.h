/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnoreen <jnoreen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 05:52:37 by jnoreen           #+#    #+#             */
/*   Updated: 2020/11/24 05:54:21 by jnoreen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

int			ft_atoi(const char *str);
void		*ft_bzero(void *dst, size_t n);
void		*ft_calloc(size_t num, size_t size);
int			ft_isalnum(int ch);
int			ft_isalpha(int ch);
int			ft_isascii(int ch);
int			ft_isdigit(int ch);
int			ft_isprint(int ch);
void		*ft_memccpy (void *destination,
			const void *source, int c, size_t n);
void		*ft_memchr (const void *arr, int c, size_t n);
void		*ft_memcpy (void *destination, const void *source, size_t n);
void		*ft_memmove(void *dest, const void *src, size_t n);
void		*ft_memset (void *destination, int c, size_t n);
char		*ft_strchr (const char *str, int ch);
size_t		ft_strlcat(char *dst, const char *src, size_t size);
size_t		ft_strlcpy (char *dst, const char *src, size_t size);
size_t		ft_strlen(const char *str);
int			ft_strncmp(const char *str1, const char *str2, size_t n);
char		*ft_strrchr(const char *str, int ch);
char		*ft_strstr(const char *strb, const char *stra);
int			ft_tolower(int ch);
int			ft_toupper(int ch);
int			ft_memcmp(const void *arr1, const void *arr2, size_t n);
char		*ft_strnstr(const char *big, const char *little, size_t len);
char		*ft_strdup(const char *str);
size_t		ft_strlcpy(char *dst, const char *src, size_t size);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char		*ft_itoa(int n);
char		*ft_strtrim(char const *s1, char const *set);
char		**ft_split(char const *s, char c);
#endif
