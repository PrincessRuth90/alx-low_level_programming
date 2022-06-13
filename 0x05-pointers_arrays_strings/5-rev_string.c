#include "main.h"
/**
 * rev_string - prints reverse string
 * @s: pointer to the string to print
 * Return: Always 0 (Success)
 */

void rev_string(char *s)
{
int a, b, c;
char x;

for (a = 0; s[a] != '\0'; a++)
;
c = a;
b = 0;
for (c = c - 1; b < (c / 2); c--, b++)
{
x = s[b];

s[b] = s[a];
s[a] = x;
}
}
