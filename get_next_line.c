/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 09:33:27 by chhoflac          #+#    #+#             */
/*   Updated: 2024/01/02 15:07:31 by chhoflac         ###   ########.fr       */
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

void	ft_push_left(char *cont)
{
	size_t	i;
	size_t	cursor;

	cursor = ft_str_stop(cont, '\n');
	i = 0;
	while (i < ft_str_stop(cont, '\n') || cont[cursor])
	{
		cont[i] = cont[cursor];
		cursor++;
		i++;
	}
	cont[cursor] = '\0';
}

//si pas de \n
char	*ft_fill(char *cont)
{
	char	*temp;
	size_t	sze;
	size_t	i;

	temp = malloc(ft_str_stop(cont, '\0') + BUFFER_SIZE);
	sze = ft_str_stop(cont, '\0');
	i = 0;
	while (temp[sze] )
	{
		temp[sze] = cont[i];
		sze++;
		i++;
	}
	free(cont);
	return (temp);
}

char	*get_next_line(int fd)
{
	static char cont[BUFFER_SIZE + 1];
	ssize_t i;

	if (cont[0] == '\0')
		read(fd, cont, BUFFER_SIZE);
	while (!ft_strchr(cont, '\n'))
	{
		read(fd, ft_fill(cont), BUFFER_SIZE);
	}
	return (ft_cut(cont));
}