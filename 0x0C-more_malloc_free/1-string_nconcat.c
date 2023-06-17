#include "main.h"

/**
 * string_nconcat - this func concatenates 2 str
 * @s1: argument 1
 * @s2: 2nd argument
 * @n: 3rd argument
 * Return: 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t leng_s1 = strlen(s1);
	size_t leng_s2 = strlen(s2);
	size_t leng_result = leng_s1 + n;
	char *res = malloc((leng_result + 1) * sizeof(char));

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (n >= leng_s2)
	{
		n = leng_s2;
	}
	if (res == NULL)
	{
		return (NULL);
	}
	strcpy(res, s1);
	strncat(res, s2, n);

	return (res);
}
