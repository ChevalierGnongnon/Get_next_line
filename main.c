
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
}