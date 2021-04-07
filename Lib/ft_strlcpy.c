/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnoreen <jnoreen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 00:03:24 by jnoreen           #+#    #+#             */
/*   Updated: 2020/11/19 10:04:33 by jnoreen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t a;
	size_t i;

	i = 0;
	if (!dst)
		return (0);
	a = ft_strlen(src);
	while (size != 0 && i < size - 1 && *src != '\0')
	{
		dst[i] = *src;
		src++;
		i++;
	}
	if (size > 0)
		dst[i] = '\0';
	return (a);
}
