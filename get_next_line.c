/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 21:41:08 by chhoflac          #+#    #+#             */
/*   Updated: 2023/12/22 01:25:46 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

//Remplir le buffer
char	*ft_readbytes(int fd, char *buf)
{
	size_t		ret;
	size_t		i;
	static char	*end;

	buf = malloc(BUFFER_SIZE + 1);
	ret = read(fd, buf, BUFFER_SIZE);
	i = 0;
	while (i < ret)
	{
		if (buf[i] == '\n')
			//stocker le reste (apres \n) dans une variable statique
			//revoyer la ligne jusque \n
			return (ft_substr(buf, 0, i));
		i++;
	}
	return(buf);
}

//GNL
char	*get_next_line(int fd)
{
	static char *buff;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	return (line);
}