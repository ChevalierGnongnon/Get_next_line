/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 09:33:27 by chhoflac          #+#    #+#             */
/*   Updated: 2023/12/29 15:35:06 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "get_next_line.h"

char	*ft_cut(char *cont)
{
	size_t	i;
	char	*s;

	i = 0;
	s = malloc(ft_str_stop(cont, '\n'));
	while (cont[i] != '\n')
	{
		s[i] = cont[i];
		i++;
	}
	s[i] = '\n';
	s[i + 1] = '\0';
	return (s);
}
void	ft_empty(char *cont)
{
	size_t	i;

	i = 0;
	while(cont[i] != '\n')
	{
		cont[i] = '\0';
		i++;
	}
}
char	*get_next_line(int fd)
{
	static char cont[BUFFER_SIZE + 1];
	ssize_t i;

	if (cont[0] == '\0')
		read(fd, cont, BUFFER_SIZE);
	if (strchr(cont, '\n'))
		return (ft_cut(cont));
	
}


de ca --> test\nwgwrfliyurg
a ca --> wgwrfliyurg\0\0\0\0\0  
dans ft_empty