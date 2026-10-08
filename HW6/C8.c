#include <stdio.h>

void ABC_func (char c)
{
    if (c >= 'a' && c <= 'z')
    {
        putchar('A' + (c - 'a'));
    }
    else
    {
        putchar(c);
    }
}

int main(void)
{
    char c;

    while ((c = getchar()) != '.')
    {

        ABC_func(c);
    }

    return 0;
}

