/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnoreen <jnoreen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 19:08:32 by jnoreen           #+#    #+#             */
/*   Updated: 2020/11/22 20:51:03 by jnoreen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*r;
	int		i;

	if (s == NULL)
		return (NULL);
	r = (char *)malloc(ft_strlen(s) + 1);
	if (r == NULL)
		return (NULL);
	if (s && f)
	{
		i = 0;
		while (s[i])
		{
			r[i] = f(i, s[i]);
			i++;
		}
		r[i] = '\0';
	}
	return (r);
}
