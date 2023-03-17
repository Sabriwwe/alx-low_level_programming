#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:  program that prints all single digit numbers of base 10 
 * starting from 0, followed by a new line.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
char a;
for (a = '0'; a <= '9'; a++)
putchar("%c", a);

putchar("\n");
return (0);
}
