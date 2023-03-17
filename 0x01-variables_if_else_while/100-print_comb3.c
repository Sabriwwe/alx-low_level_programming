#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: program that prints all single digit numbers of base 10
 * starting from 0, followed by a new line
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
int num;
int num1;
for (num = 0; num <= 9; num++)
{
for (num1 = 0; num1 <= 9; num1++)
{
putchar((num % 10) + '0');
putchar((num1 % 10) + '0');
if (num == 9 && num1 == 9)
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');  
return (0);
}
