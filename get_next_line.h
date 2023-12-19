/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 13:37:32 by chhoflac          #+#    #+#             */
/*   Updated: 2023/12/19 16:06:47 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
//# ifndef BUFFER_SIZE
//#  define BUFFER_SIZE 5
//# endif

char	*get_next_line(int fd);
size_t	ft_strlen(char *str);
char	*ft_strchr(const char *str, int c);

#endif