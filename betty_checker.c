#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry Point
 *
 * Description: A program that adds two numbers
 * and prints the instance id. ie, PID
 *
 * Return: int
 */

int main(void)
{
	int num1, num2, sum;
	pid_t pid, ppid;

	num1 = 3;
	num2 = 7;
	sum = num1 + num2;
	pid = getpid();
	ppid = getppid();

	printf("Sum = %d\nPID = %u\nPPID = %u\n", sum, pid, ppid);
	printf("Hello, World\n");
	return (0);
}

