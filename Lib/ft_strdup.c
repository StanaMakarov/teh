/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnoreen <jnoreen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 23:19:05 by jnoreen           #+#    #+#             */
/*   Updated: 2020/11/23 21:31:13 by jnoreen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*arr;
	int		i;

	i = 0;
	if (str == NULL)
		return (NULL);
	arr = malloc(ft_strlen(str) + 1);
	if (arr == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		arr[i] = str[i];
		i++;
	}
	arr[i] = '\0';
	if (str[i] == arr[i] && arr[i] == '\0')
		return (arr);
	return (NULL);
}
