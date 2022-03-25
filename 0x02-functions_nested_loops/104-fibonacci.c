#include <stdio.h>
/**
 * main - entry point
 *
 * Description: a program that finds and prints
 * the first 98 Fibonacci numbers, starting
 * with 1 and 2, followed by a new line.
 * Return: Always 0
 */
int main(void)
{
	int i;
	unsigned long int p1, p2, nextNum;

	p2 = 0;
	p1 = 1;
	for (i = 0; i < 98; i++)
	{
		nextNum = p1 + p2;
		if (i == 97)
			printf("%lu", nextNum);
		else
			printf("%lu, ", nextNum);
		p2 = p1;
		p1 = nextNum;
	}
	printf("\n");
	return (0);
}
