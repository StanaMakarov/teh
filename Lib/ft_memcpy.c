/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnoreen <jnoreen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 21:20:59 by jnoreen           #+#    #+#             */
/*   Updated: 2020/11/12 19:02:28 by jnoreen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t n)
{
	unsigned char	*b;
	const char		*c;
	int				i;

	c = source;
	b = destination;
	i = 0;
	while (n && source)
	{
		b[i] = c[i];
		n--;
		source++;
		i++;
	}
	return (b);
}
