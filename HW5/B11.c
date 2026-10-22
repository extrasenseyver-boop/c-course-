#include <stdio.h>

int main(void)
{
    int number, last_num = 0, result = 0;
    scanf("%d", &number);

    while ( number > 0)
    {
        last_num = number % 10;
        number /= 10;
        result = result * 10 + last_num;
    }
    printf("%d", result);

    return 0;
}

