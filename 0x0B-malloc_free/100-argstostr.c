#include "main.h"

/**
 * argstostr - function that concayemates all my program
 * @ac: the number of arguments
 * @av: array of strings containing the arguments
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	size_t tlen = 0;
	size_t nlen = tlen + ac + 1;
	size_t dex = 0;
	int i;
	char *new_str = (char *)malloc(nlen * sizeof(char));

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
		tlen += strlen(av[i]);
	if (new_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		strcpy(new_str + dex, av[i]);
	dex += strlen(av[i]);
	new_str[dex] = '\n';
	dex++;
	}
	new_str[nlen - 1] = '\0';
	return (new_str);
}
