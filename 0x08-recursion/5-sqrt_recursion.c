#include "main.h"

int actual_sqrt_recursion(int i, int c);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @i: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int i)
{
	if (i < 0)
		return (-1);
	return (actual_sqrt_recursion(i, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @i: number to calculate the sqaure root of
 * @c: iterator
 *
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int i, int c)
{
	if (c * c > i)
		return (-1);
	if (c * c == i)
		return (c);
	return (actual_sqrt_recursion(i, c + 1));
}
