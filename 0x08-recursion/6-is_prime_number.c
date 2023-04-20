#include "main.h"

int actual_prime(int i, int z);

/**
 * is_prime_number - says if an integer is a prime number or not
 * @i: number to evaluate
 *
 * Return: 1 if i is a prime number, 0 if not
 */
int is_prime_number(int i)
{
	if (i <= 1)
		return (0);
	return (actual_prime(i, i - 1));
}

/**
 * actual_prime - calculates if a number is prime recursively
 * @i: number to evaluate
 * @z: iterator
 *
 * Return: 1 if niis prime, 0 if not
 */
int actual_prime(int i, int z)
{
	if (z == 1)
		return (1);
	if (i % z == 0 && z > 0)
		return (0);
	return (actual_prime(i, z - 1));
}
