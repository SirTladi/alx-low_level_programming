#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated
 * space in memory which contains a copy of the string
 * passed.
 * @str: pointer to string being duplicated.
 *
 * Return: NULL if str is NULL.
 * pointer to duplicated string on success.
 * NULL if memory was insufficient.
 */
char *_strup(char *str)
{
	char *nstr;
	unsigned int len, i;

	/* check is str null */
	if (str == NULL)
	{
		return (NULL);
	}
