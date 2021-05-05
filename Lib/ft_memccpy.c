/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnoreen <jnoreen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 20:09:05 by jnoreen           #+#    #+#             */
/*   Updated: 2020/11/23 20:04:35 by jnoreen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	a;
	unsigned char	*b;
	unsigned char	*s;

	a = (unsigned char)c;
	b = (unsigned char *)dst;
	s = (unsigned char *)src;
	while (n)
	{
		*b++ = *s++;
		if (*(b - 1) == a)
			return (b);
		n--;
	}
	return (NULL);
}
