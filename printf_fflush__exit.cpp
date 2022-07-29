#include <stdio.h>
#include <unistd.h>
int main()
{
	printf("hello world\n");
	fflush(stdout);
	_exit(0);
}