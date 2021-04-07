/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnoreen <jnoreen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 14:36:13 by jnoreen           #+#    #+#             */
/*   Updated: 2020/11/24 00:08:47 by jnoreen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t a;
	size_t i;
	size_t r;

	if (src == 0)
		return (0);
	if (size == 0)
		return (ft_strlen(src));
	i = ft_strlen(dst);
	a = ft_strlen(src);
	if (i < size)
		r = i + a;
	else
		return (size + a);
	while (size != 0 && i < size - 1 && *src != '\0')
	{
		dst[i] = *src;
		src++;
		i++;
	}
	dst[i] = '\0';
	return (r);
}
