/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 09:33:27 by chhoflac          #+#    #+#             */
/*   Updated: 2024/01/05 17:17:11 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "get_next_line.h"

void	ft_push_left(char *cont)
{
	size_t	i;
	size_t	cursor;

	cursor = ft_str_stop(cont, '\n') + 1;
	i = 0;
	while (cont[cursor])
	{
		cont[i] = cont[cursor];
		cursor++;
		i++;
	}
	while (cont[i])
		cont[i++] = '\0';
}

// mettre le contenu de buff dans ligne
void	ft_fill(char *buff, char **line, size_t nbchar)
{
	char	*temp;
	size_t	i;

	if (*line == 0)
	{
		*line = malloc(nbchar + 1);
		line[0][0] = '\0';
	}
	else
	{
		i = 0;
		temp = malloc(ft_strlen(*line) + nbchar + 1);
		while (line[0][i])
		{
			temp[i] = line[0][i];
			i++;
		}
		free(*line);
		temp[i] = '\0';
		*line = temp;
	}
	ft_strlcat(*line, buff, ft_strlen(*line) + nbchar + 1);
	if (!ft_strchr(buff, '\n'))
		ft_bzero(buff, BUFFER_SIZE);
}

char	*get_next_line(int fd)
{
	static char	buff[2048][BUFFER_SIZE + 1];
	char		*line;
	ssize_t		nbchar;

	if (buff[fd][0] == '\0')
		if (read(fd, buff[fd], BUFFER_SIZE) <= 0)
			return (NULL);
	line = 0;
	nbchar = 1;
	while (!ft_strchr(buff[fd], '\n'))
	{
		ft_fill(buff[fd], &line, ft_strlen(buff[fd]));
		nbchar = read(fd, buff[fd], BUFFER_SIZE);
		if (nbchar <= 0)
			break ;
	}
	if (nbchar > 0)
		ft_fill(buff[fd], &line, ft_str_stop(buff[fd], '\n') + 1);
	else if (nbchar < 0)
		return (free(line), NULL);
	ft_push_left(buff[fd]);
	return (line);
}
