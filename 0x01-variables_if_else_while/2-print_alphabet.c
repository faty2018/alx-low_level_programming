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
char t[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(t[i]);
	}
	putchar('\n');
	return (0);
}

