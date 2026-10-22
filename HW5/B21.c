#include <stdio.h>

int main(void)
{
    char abc;

    while ((abc = getchar()) != '.')
    {
        if (abc >= 'A' && abc <= 'Z')
            putchar ('a' + (abc - 'A'));

        else
            putchar(abc);
    }

    return 0;
}

