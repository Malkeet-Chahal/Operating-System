#include<stdio.h>
#include<unistd.h>

int main()
{
	fork();
	printf("Hello World!\n");
	printf("Get PID: %d\n", getpid());

	return 0;
}
