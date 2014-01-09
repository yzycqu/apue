#include <unistd.h>
#include <stdlib.h>

#define BUFFSIZE 1024

int main(int argc, char const *argv[])
{
	int n;
    char buff[BUFFSIZE];
	while((n = read(STDIN_FILENO, buff, BUFFSIZE)) > 0)
		write(STDOUT_FILENO, buff, n);
	exit(0);
}