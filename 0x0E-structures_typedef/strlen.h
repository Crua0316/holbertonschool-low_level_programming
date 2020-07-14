#ifndef STRLEN_H
#define STRLEN_H

unsigned int _strlen(char *s)
{
	unsigned int a = 0;

	while (*(s + a) != '\0')
	{
		a++;
	}

	return (a);
}

void *_strcpy(char *dest, char *src)
{
	int a = 0;

	if (src != '\0')
	{
		for (a = 0;  *(src + a) != '\0'; a++)
		{
			*(dest + a) = *(src + a);
		}
	}

	*(dest + a) = '\0';
	return (dest);
}

#endif