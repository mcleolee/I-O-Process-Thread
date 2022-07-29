#include <stdio.h>
#include <unistd.h>
int main()
{
	fprintf(stdout,"STDOUT:hello world");
	fprintf(stderr,"STDERR:hello world");
	printf("\n");
	
	_exit(0);
}