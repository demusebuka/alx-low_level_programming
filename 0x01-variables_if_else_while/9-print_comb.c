#include <stdio.h>

/**
 * main - Begin Here
 *
 * print 0-9 using putchar
 *
 * Return: Value 0 (true)
 */

int main(void)
{

	int ch;


		for (ch = 48; ch <= 57; ch++)

	{

			putchar(ch);

	if (ch != 57)

	{


		putchar(44);

		putchar(32);

	}

	}

		putchar(10);



	return (0);

}
