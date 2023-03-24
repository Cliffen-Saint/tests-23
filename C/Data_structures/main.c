#include <stdio.h>

void main(void)
{
    int x = 0;

    while (x <= 9)
    {
        if (x != 2 && x != 4)
        {
            putchar(x);
            x++;
        }
    }
    putchar('\n');
}
