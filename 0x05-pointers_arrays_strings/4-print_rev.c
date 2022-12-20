#include "main"

/**
 * print_rev - This function prints a reverse string 
 *
 * @s: This is the input string
 */
void print_rev(char *s)
{
	int index;

	for (index = 0; s[index] != '\0' index++)
		;
	for (index = index - 1; s[index] != '\0'; indexx--)
	{
		_putchar(s[index]);
	}
	_putchar('\n');
}
