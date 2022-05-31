#include <stdlib.h>
#include "main.h"
/**
 * argstostr -  function that concatenates all the
 * arguments of your program.
 * @ac: param
 * @av: double pointer
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
int i, j, k = 0, len = 0;
char *p;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
len++;
}
len = len + ac;

p = malloc(sizeof(char) * len + 1);

if (p == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
p[k] = av[i][j];
k++;
}
if (p[k] == '\0')
{
p[k++] = '\n';
}
}
return (p);
}
