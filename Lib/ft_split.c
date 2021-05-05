/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnoreen <jnoreen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 19:09:30 by jnoreen           #+#    #+#             */
/*   Updated: 2020/11/25 18:55:11 by jnoreen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		*ft_free(char **ab, int wc)
{
	int i;

	i = 0;
	while (i < wc)
	{
		free(ab[i++]);
		ab[i] = 0;
	}
	free(ab);
	return (NULL);
}

static char		**ft_cpy(char **ab, char c, char *s, int wc)
{
	int i;
	int start;
	int j;

	i = -1;
	start = 0;
	j = 0;
	while (s[++i])
		if (s[i] == c && (s[i + 1] != c && s[i + 1] != 0))
			start = i + 1;
		else if (s[i] != c && (s[i + 1] == 0 || s[i + 1] == c))
		{
			ab[j++] = ft_substr(s, start, i - start + 1);
			if (!ab[j - 1])
			{
				ft_free(ab, wc);
				return (NULL);
			}
		}
	ab[j] = NULL;
	return (ab);
}

static int		ft_words(char *a, char c)
{
	int i;
	int wc;

	wc = 0;
	i = 0;
	while (a[i] != '\0')
	{
		while (a[i] != '\0' && a[i] == c)
			i++;
		if (a[i] != '\0' && a[i] != c)
			wc++;
		while (a[i] != '\0' && a[i] != c)
			i++;
	}
	return (wc);
}

char			**ft_split(char const *s, char c)
{
	char	**ab;
	int		wc;

	if (!s)
		return (NULL);
	wc = ft_words((char *)s, c);
	ab = (char **)malloc(sizeof(char *) * (wc + 1));
	if (!ab)
		return (NULL);
	ab = ft_cpy(ab, c, (char *)s, wc);
	return (ab);
}
