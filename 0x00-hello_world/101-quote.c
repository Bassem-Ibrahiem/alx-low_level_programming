#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints and that piece of art is useful" 
 * - Dora Korpar, 2015-10-19
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{
    write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", \
          strlen("and that piece of art is useful\" - Dora Korpar, 2015-10-19"));
    return (1);
}
