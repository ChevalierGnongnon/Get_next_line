/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 21:41:08 by chhoflac          #+#    #+#             */
/*   Updated: 2023/12/22 15:55:44 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

ft_cut(char *s)
{

}
//Remplir le buffer
char	*ft_readbytes(int fd, char *buf)
{
	size_t	i;
	ssize_t ret;
	static char	*stock;

	i = 0;
	while (!ft_strchr(buf, '\n'))
	{
		ret = read(fd, buf, BUFFER_SIZE);
		stock = ft_strjoin(stock, buf);
		if (ret == 0 && ft_strlen(buf) == 0)
			break;
	}
	return(buf);
}

//GNL
char	*get_next_line(int fd)
{
	static char buff[BUFFER_SIZE];
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	return (line);
}