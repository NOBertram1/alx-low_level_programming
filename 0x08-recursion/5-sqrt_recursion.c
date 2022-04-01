#include "main.h"

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: int number
 * Return: return -1 if no natural square root, Else return natural
 * square root
 * sq - function to solve _sqrt_recursion
 * @c: number to determine if square root
 * @i: incrementer to compare against `c`
 */

int _sqrt_recursion(int n)
{
	return (sq(n, 1));
}

int sq(int c, int i)
{
	int square;

	square = i * i;
	if (square == c)
		return (i);
	else if (square < c)
		return (sq(c, i + 1));
	else
		return (-1);
}
