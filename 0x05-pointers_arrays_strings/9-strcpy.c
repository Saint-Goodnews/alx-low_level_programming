#include "main.h"

/**
 * *_strcpy - copies string from pointer to pointer.
 *
 * @dest: destination
 * @src: source
 * Return: pointer
 */

char *_strcpy(char *dest, char *src)
{

int i = -1;
do {
i++;
dest[i] = src[i];
} while (src[i] != '\0');

return (dest);
}
