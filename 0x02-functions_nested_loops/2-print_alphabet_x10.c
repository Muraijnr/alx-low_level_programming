#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times
 * Return:void
 */
void print_alphabet_x10(void)
{
	int x;
        char alpha;
        x = 0;

        while (x < 10)
        {
                for (alpha = 'a'; alpha <= 'z'; alpha++)
                {
                        _putchar(alpha);
                }
                _putchar('\n');
                x++;
        }
}
