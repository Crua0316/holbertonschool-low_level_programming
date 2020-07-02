#include "holberton.h"
/**
 * isprimenumber - prime numbers
 * @a: integer to test if prime
 * @b: interger arument passed to function
 * Return: prime number if detected
 */
int isprimenumber(int a, int b)
{
	if (b % a == 0)
	{
		return (0);
	}
	else if ((a * a) > b)
	{
		return (1);
	}
	else
	{
		return (isprimenumber(a + 1, b));
	}

}
/**
 * is_prime_number - returns the natural square
 * @n: integer
 * Return: 1 if prime , 0 if negative
 */

int is_prime_number(int n)
{
	int a = 2;

	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else
	{
		return (isprimenumber(a, n));
	}
}