/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 21:34:24 by chhoflac          #+#    #+#             */
/*   Updated: 2023/12/19 16:06:19 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#define BUFFER_SIZE 42

/*char	*get_next_line(int fd)
{
	char	*buff;

	read(fd, buff, 124);
	return(buff);
}*/

// to separate before amd after string

char    *get_next_line(int fd)
{
	char	*buff[BUFFER_SIZE];
	size_t	i;

	read(fd, buff, BUFFER_SIZE);
}


