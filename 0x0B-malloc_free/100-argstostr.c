#include "main.h"
#include <stdlib.h>
/**
 * *argstostr - concatenates all arguments to the program
 * @ac: argument count
 * @av: pointer to arguments
 * Return: pointer to new space in memory or null
 **/
char *argstostr(int ac, char **av)
{
	char *strDup;
	int i, j, k, size;

	if (ac == 0 || av == NULL)
		return (NULL);
	size = 0;
	/* count the number of chars in each strings */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			size++;
		size++;
	}
	size++;
	/*allocate memory for total number of chars and new line for each word*/
	strDup = malloc(sizeof(char) * size);
	if (strDup == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			strDup[k++] = av[i][j];
		}
		strDup[k++] = '\n';
	}
	strDup[k] = '\0';
	return (strDup);
}
