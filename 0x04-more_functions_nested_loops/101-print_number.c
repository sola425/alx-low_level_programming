#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer.
 *
 * Description: This function takes an integer as input and prints it to the standard output.
 * It works by converting the input integer to its absolute value, then iteratively dividing
 * the value by 10 to obtain the digits of the number. Each digit is then printed to the standard
 * output using the _putchar function.
 */
void print_number(int n)
{
	unsigned int num, div = 1;

	/* Handle negative numbers */
	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}
	
	/* Determine the divisor needed to obtain the leftmost digit */
	while (num / div >= 10)
	{
		div *= 10;
	}
	
	/* Print each digit in the number */
	while (div != 0)
	{
		_putchar('0' + (num / div));
		num %= div;
		div /= 10;
	}
}
