#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block
 * Description: print out lowercase alphabet
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}

