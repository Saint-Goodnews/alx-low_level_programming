#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - function that concatenates two strings.
 *
 * @s1: parameter 1
 * @s2: parameter 2
 * Return: pointer of concat if success.
 */

char *str_concat(char *s1, char *s2)
{
unsigned int strlen1, strlen2, i, j;
char *p;

strlen1 = 0;
while (s1 && s1[strlen1])
strlen1++;

strlen2 = 0;
while (s2 && s2[strlen2])
strlen2++;

p = malloc(sizeof(*p) * (strlen1 + strlen2 + 1));

if (p == NULL)
return (NULL);

i = 0;
while (i < strlen1)
{
p[i] = s1[i];
i++;
}

j = 0;
while (i < (strlen1 + strlen2))
{
p[i] = s2[j];
i++;
j++;
}

p[i] = '\0';

return (p);
}
