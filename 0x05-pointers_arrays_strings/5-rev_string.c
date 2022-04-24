#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses string.
 *
 * @s: pointer
 */

void rev_string(char *s)
{

int i, len, mid;
char hold;

for (len = 0; s[len] != '\0'; len++)
;

i = 0;
mid = len / 2;

while (mid--)
{
hold = s[i];
s[i] = s[len - i - 1];
s[len - i - 1] = hold;
i++;
}
}
