/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnoreen <jnoreen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 20:49:58 by jnoreen           #+#    #+#             */
/*   Updated: 2020/11/22 21:45:21 by jnoreen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	char			*arr;
	size_t			i;

	i = 0;
	arr = (void*)malloc(num * size);
	if (arr == NULL)
		return (NULL);
	ft_memset(arr, 0, num * size);
	while (i < size)
	{
		arr[i] = '\0';
		i++;
	}
	return (arr);
}
