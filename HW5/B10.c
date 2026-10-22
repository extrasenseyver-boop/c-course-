#include <stdio.h>

int main(void)
{
    int number, last_num;
    scanf("%d", &number);

    if (!number)
    {
        printf("YES");
        return 0;
    }

    while (number > 0)
    {
        last_num = number % 10;
        number /= 10;

        if (last_num <= (number % 10))
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");

    return 0;
}

