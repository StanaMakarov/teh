/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnoreen <jnoreen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 20:09:22 by jnoreen           #+#    #+#             */
/*   Updated: 2020/11/18 20:15:20 by jnoreen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	unsigned char *a;
	unsigned char s;

	a = (unsigned char *)b;
	s = (unsigned char)c;
	while (n)
	{
		*a++ = s;
		n--;
	}
	return (b);
}
