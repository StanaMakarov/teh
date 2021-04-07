/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnoreen <jnoreen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 19:09:17 by jnoreen           #+#    #+#             */
/*   Updated: 2020/11/23 22:14:26 by jnoreen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_size(int n, int m)
{
	int size;

	size = 1;
	while ((n /= 10))
		size++;
	return (size + (m * -1));
}

static int		ft_mod(int x)
{
	if (x < 0)
		x *= -1;
	return (x);
}

static int		ft_numlen(int n)
{
	int i;

	i = (n < 0) ? 2 : 1;
	while (n / 10 != 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char			*ft_itoa(int n)
{
	char	*s;
	int		size;
	int		m;
	int		a;

	m = 0;
	if (n < 0)
		m--;
	size = ft_size(n, m);
	s = (char *)malloc(ft_numlen(n) + 1);
	if (s == NULL)
		return (NULL);
	s[size] = '\0';
	size--;
	while (size >= ft_mod(m))
	{
		a = n % 10;
		s[size] = ft_mod(a) + 48;
		n /= 10;
		size--;
	}
	if (m)
		s[0] = '-';
	return (s);
}
