/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnoreen <jnoreen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 20:09:10 by jnoreen           #+#    #+#             */
/*   Updated: 2020/11/18 20:18:46 by jnoreen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *a;
	unsigned char b;

	a = (unsigned char *)s;
	b = (unsigned char)c;
	while (n)
	{
		if (*a == b)
			return (a);
		a++;
		n--;
	}
	return (NULL);
}
