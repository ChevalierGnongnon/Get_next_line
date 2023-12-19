
/*#include "get_next_line.c"*/
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "get_next_line.c"
#include "get_next_line_utils.c"

int main(void)
{
	char *s1 = "abcdef\neroryhfb;wvli";
	char *s2 = ft_getrest(s1);
	printf("%s", s2);
}