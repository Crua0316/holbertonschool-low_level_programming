#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generate the password to 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, offset, count;
	char a[50] = "";

	srand(time(NULL));

	count = 0;
	for (i = 0; count < (2772 - 100); i++)
	{
		offset = 33 + rand() % 94;
		a[i] = offset;
		count += a[i];
	}
	a[i] = 2772 - count;
	i++;
	a[i] = '\0';

	printf("%s", a);

	return (0);
}