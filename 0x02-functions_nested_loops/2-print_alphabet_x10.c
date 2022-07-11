#include "main.h"

/**
 * print_alphabet_x10 - function to print abc 10 times
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int i;



	for (i = 0; i <= 9; i++)
	{

		char ch = 'a';



		while (ch <= 'z')
		{

			_putchar(ch);

			ch++;

		}

	_putchar('\n');

	}

}
