/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnoreen <jnoreen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 23:01:24 by jnoreen           #+#    #+#             */
/*   Updated: 2020/11/25 18:56:03 by jnoreen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	size_t		j;

	j = 0;
	if (!little || *little == '\0')
		return ((char *)big);
	while (j < len && big[j])
	{
		i = 0;
		while (big[j + i] == little[i] && (j + i) < len)
		{
			if (little[i + 1] == '\0')
				return ((char *)big + j);
			i++;
		}
		j++;
	}
	return (NULL);
}
