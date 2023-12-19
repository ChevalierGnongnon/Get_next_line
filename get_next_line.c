/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 21:34:24 by chhoflac          #+#    #+#             */
/*   Updated: 2023/12/19 11:10:01 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*char	*get_next_line(int fd)
{
	char	*buff;

	read(fd, buff, 124);
	return(buff);
}*/
char    *get_next_line(int fd)
{
	size_t	i;
	static char *temp;
	static char buf[8];

	i = 0;
	while(i < 1)
	{
		read(fd, buf, 8);
		i++;
	}
}
