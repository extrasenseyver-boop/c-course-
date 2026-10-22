#include <stdio.h>

int main(void)
{
    int number, last_num, odd = 0, even = 0;

    scanf("%d", &number);

    while (number > 0)
    {
        last_num = number % 10;

        if (last_num % 2 != 0)
        {
            odd += 1;
        }

        else if (last_num % 2 == 0)
        {
            even += 1;
        }

        number /= 10;
    }
    printf("%d %d", even, odd);

    return 0;
}

