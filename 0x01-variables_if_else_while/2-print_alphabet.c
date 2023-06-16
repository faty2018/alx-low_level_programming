#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print aplhabet letters in lowercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i;
	char t[26] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0 ; i < 26 ; i++)
	{
		putchar(t[i]);
	}
	putchar('\n');

	return (0);
}
