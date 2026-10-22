#include <stdio.h>

int main(void)
{
    int number, rem_num, score_9 = 0;
    scanf("%d", &number);

    while (number > 0)
    {
        rem_num = number % 10;

        if (rem_num == 9)
        {
            score_9++;
        }
        number /= 10;

        if (score_9 == 2)
        {
            printf("NO");
            return 0;
        }
    }

    if (score_9 == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}

