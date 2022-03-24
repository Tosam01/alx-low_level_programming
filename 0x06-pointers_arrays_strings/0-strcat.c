#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: inputs value
 * @src: inputs value
 * Retun: void
 */
char *_strcat(char *dest, char *src)
{
	char *s =  dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}