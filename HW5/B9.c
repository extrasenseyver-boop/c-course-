#include <stdio.h>

int main(void)
{
    int number, rem_num, score_even = 0, score_num = 0;
    scanf("%d", &number);

    while (number>0)
    {
        rem_num = number % 10;

        if ((rem_num / 2) * 2 == rem_num)
        {
            score_even++;
        }
        score_num++;
        number /= 10;
        //~ printf("%d ", score_num);
        //~ printf("%d, ", score_even);
    }
    if (score_even == score_num)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}

