
/*#include "get_next_line.c"*/
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "get_next_line.c"

int main(void)
{
	char *path = "test.txt";
	int fd = open(path, O_RDONLY);
	char *s = get_next_line(fd);
	printf("%s", s);

//UTILISER OPEN ICI

	/*int fd; 
	char buff[1024];
	char path[] = "test.txt";

	fd = open(path, O_RDONLY);
	read(fd, buff, 1024);
	printf("%s", buff);*/
}