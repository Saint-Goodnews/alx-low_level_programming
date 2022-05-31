#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - function that returns a pointer to a
 *  newly allocated space in memory, which contains
 *  a copy of the string given as a parameter
 *
 * @str: parameter
 * Return: pointer if success.
 */

char *_strdup(char *str)
{
unsigned int i, strlen;
char *p;

if (str == NULL)
return (NULL);

strlen = 0;
while (str[strlen])
strlen++;

p = malloc(sizeof(*str) * (strlen + 1));

if (p == NULL)
return (0);

i = 0;
while (str[i] != '\0')
{
p[i] = str[i];
i++;
}

return (p);
}
