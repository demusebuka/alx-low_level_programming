#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Begin Here
 *
 * print a-z and A-Z using putchar
 *
 * Return: Value 0 (true)
 */

int main(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
	{
		putchar(ch);
	}
	for (ch = 65; ch <= 90; ch++)
	{
		putchar(ch);
	}
		putchar(10); /* this is the ASCII code for new line*/
	return (0);
}
