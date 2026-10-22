#include <stdio.h>

int main(void)
{
    int number, even_counter = 0;

    scanf("%d", &number);

    if (!number)
    {
        printf("%d", number);

        return 0;
    }

    do
    {
        if (number % 2 == 0)
        {
            even_counter += 1;
        }

        scanf("%d", &number);

    } while (number);

    printf("%d", even_counter);

    return 0;
}

