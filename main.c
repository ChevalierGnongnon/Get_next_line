/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 12:54:13 by chhoflac          #+#    #+#             */
/*   Updated: 2024/01/03 10:57:36 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "get_next_line.c"
#include "get_next_line_utils.c"
#include <fcntl.h>

int	main(void)
{
	int fd = open("test.txt", O_RDONLY);
	get_next_line(fd);
	close(fd);
}
