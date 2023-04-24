#include "main.h"
/**
 * cap_string - capitalizes word of strings
 * @let: argument
 * Return: 0
 */
char *cap_string(char *let)
{
	int i = 0;
	int capn = 1;

	while (let[i] != '\0')
	{
		if (let[i] == ' ' || let[i] == '\t' || let[i] == '\n' ||
				let[i] == ',' || let[i] == ';' || let[i] == '.' ||
				let[i] == '!' || let[i] == '?' || let[i] == '\"' ||
				let[i] == '(' || let[i] == ')' || let[i] == '{' || let[i] == '}')
		{
			capn = 1;
		}
		else if (capn)
		{
			if (let[i] >= 'a' && let[i] <= 'z')
			{
				capn = 0;
			}
		}
		i++;
	}
	return (let);
}
