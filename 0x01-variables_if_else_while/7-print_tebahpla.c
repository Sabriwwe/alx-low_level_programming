#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: program that prints the lowercase alphabet in reverse
 *, followed by a new line.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
char a;
for (a = 'z' ; a >= 'a'; a--)
putchar(a);
putchar ('\n');
return (0);
}
