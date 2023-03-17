#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
*
* Description: program that prints the alphabet in lowercase .
*
* Return: Always 0 (success)
*/

int main(void)
{
	char let;

	for (let = 'a'; let <= 'z'; let++)
		putchar(let);
	
	putchar('\n');

	return (0);
}
