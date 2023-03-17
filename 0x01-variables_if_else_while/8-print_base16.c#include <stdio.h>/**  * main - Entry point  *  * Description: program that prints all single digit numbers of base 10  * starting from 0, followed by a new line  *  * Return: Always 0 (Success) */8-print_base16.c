#include <stdio.h>
/**
 * main - Entry point
 *
 * Description:program that prints all the numbers of base 16 in lowercase
 *, followed by a new line.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
char a;
for (a = '0'; a < '10'; a++)
printf("%c", a);
for (a = 'a'; a <= 'f'; a++)
printf("%c", a);
printf("\n");
return (0);
}
