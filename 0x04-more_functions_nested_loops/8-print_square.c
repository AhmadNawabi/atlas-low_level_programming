#include "main.h"

/**
 * print_square - prints a square of size size
 * @size: size of square
 *
 * Return: void
 */


void print_square(int size)
{
	int a, b;

	if (size <= 0)
		putchar('\n');
	for (a = 0; a < size; a++)
	{
		for (b = 0; b < (size); b++)
		{
			putchar('#');
		}
		putchar('\n');
	}

}
