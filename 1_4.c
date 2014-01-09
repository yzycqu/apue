#include <stdlib.h>
#include <stdio.h>

int main() {
	printf("Current PID is: %d\n", getpid());
	sleep(10);
	exit(0);
}