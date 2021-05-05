/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnoreen <jnoreen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 20:09:57 by jnoreen           #+#    #+#             */
/*   Updated: 2020/11/18 20:15:45 by jnoreen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*a;
	char	b;

	a = (char *)s + ft_strlen(s);
	b = (char)c;
	while (a >= s)
	{
		if (*a == b)
			return (a);
		a--;
	}
	return (NULL);
}
