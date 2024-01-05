/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 12:54:13 by chhoflac          #+#    #+#             */
/*   Updated: 2024/01/05 04:00:04 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	int fd = open("test.txt", O_RDONLY);
	char *line;
	while ((line = get_next_line(fd)))
	{
		printf("%s", line);
		//dprintf(2, "ligne\n");
		free(line);
	}
	close(fd);
}
