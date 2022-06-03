#include <stdio.h>

/**
 * main - Prints out all the letters in
 * the alphabet in order, excluding letter,
 * e and q.
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;

for (i = 97; i < 123; i++)
{ 
if (i != 101 && i != 113)
{	
putchar(i);
}
}
putchar ('\n');
return (0);
}
