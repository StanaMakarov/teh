/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnoreen <jnoreen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 10:52:50 by jnoreen           #+#    #+#             */
/*   Updated: 2020/11/23 22:31:49 by jnoreen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*r;
	size_t	i;
	size_t	j;

	i = start;
	j = 0;
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len >= ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	r = (char *)malloc(len + 1);
	if (!r || !s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (r);
	while (s[i] != '\0' && i < len + (size_t)start)
	{
		r[j] = s[i];
		i++;
		j++;
	}
	r[j] = '\0';
	return (r);
}
