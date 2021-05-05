/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnoreen <jnoreen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 22:13:46 by jnoreen           #+#    #+#             */
/*   Updated: 2021/02/16 19:34:25 by jnoreen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t		ft_strlen(const char *s)
{
	size_t n;

	if (s == 0)
		return (0);
	n = 0;
	while (s[n])
		n++;
	return (n);
}

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*r;
	int		i;
	int		j;

	i = 0;
	j = 0;
	r = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!r || !s1 || !s2)
		return (NULL);
	while (s1[i] != '\0')
	{
		r[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		r[i] = s2[j];
		i++;
		j++;
	}
	r[i] = '\0';
	return (r);
}

char		*ft_strdup(const char *s1)
{
	int		i;
	char	*res;

	i = 0;
	if (NULL == (res = malloc(sizeof(char) * ft_strlen(s1) + 1)))
		return (NULL);
	while (s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

char		*ft_strchr(const char *s, int c)
{
	char	*a;
	char	b;

	a = (char *)s;
	b = (char)c;
	while (*a)
	{
		if (*a == b)
			return (a);
		a++;
	}
	if (b == '\0')
		return (a);
	return (NULL);
}
