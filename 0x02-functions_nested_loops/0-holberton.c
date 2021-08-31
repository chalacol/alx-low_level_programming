#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char holberton[8] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n'};
	unsigned int i;

	for (i = 0; i < sizeof(holberton); i++)
	{
		_putchar(holberton[i]);
	}
	_putchar('\n');
	return (0);
}
