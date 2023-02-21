#include "main.h"
#include <stdio.h> // add this line to include the declaration of _putchar()

/**
 * main - print Holberton as a message.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
        int str[] = {95, 112, 117, 116, 99, 104, 97, 114};
        int count, sz;

        sz = sizeof(str) / sizeof(int);
        for (count = 0; count < sz; count++)
        {
                putchar(str[count]); // change _putchar to putchar
        }
        putchar('\n'); // change _putchar to putchar
        return (0);
}
