/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnoreen <jnoreen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 22:13:52 by jnoreen           #+#    #+#             */
/*   Updated: 2021/02/18 20:19:13 by jnoreen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char		*provost(char **ost, char **line)
{
	char	*uk;
	char	*utek;

	uk = NULL;
	if (*ost != NULL)
	{
		if ((uk = ft_strchr(*ost, '\n')))
		{
			*uk = '\0';
			*line = ft_strdup(*ost);
			utek = *ost;
			*ost = ft_strdup(++uk);
			free(utek);
		}
		else
		{
			*line = ft_strdup(*ost);
			free(*ost);
			*ost = NULL;
		}
	}
	else
		*line = ft_strdup("");
	return (uk);
}

static int		error(char *buff)
{
	if (buff != NULL)
		free(buff);
	return (-1);
}

static char		*tru(char *line, char *buff)
{
	char *utek;

	utek = line;
	if (!(line = ft_strjoin(line, buff)))
		return (0);
	free(utek);
	return (line);
}

int				get_next_line(int fd, char **line)
{
	char		*buff;
	char		*uk;
	int			count;
	static char	*ost;

	buff = NULL;
	if (BUFFER_SIZE < 1 || !(buff = malloc(BUFFER_SIZE + 1))
	|| read(fd, buff, 0) < 0)
		return (-1);
	uk = provost(&ost, line);
	while (!uk && (count = read(fd, buff, BUFFER_SIZE)))
	{
		buff[count] = '\0';
		if ((uk = ft_strchr(buff, '\n')))
		{
			*uk = '\0';
			if (!(ost = ft_strdup(++uk)))
				return (error(buff));
		}
		if (!(*line = tru(*line, buff)))
			return (error(buff));
	}
	free(buff);
	return (uk != NULL ? 1 : 0);
}
