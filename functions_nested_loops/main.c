#include "main.h"

/**
 * main - prints the alphabet, followed by a new line
 *
 * Return: 0
 */
int main(void)
{
    char c;

    for (c = 'a'; c <= 'z'; c++)
    {
        _putchar(c);
    }

    _putchar('\n');

    return (0);
}
