#include <stdio.h>

int sumAllnum(int x)
{
    int result = 0;//1
    int sum = x;//1

    for (int iter = x; iter; iter--)
    {
        result = iter - 1;
        sum += result;
    }

    return sum;
}

int main(void)
{
    int number;
    scanf("%d", &number);
    printf("%d", sumAllnum(number));

    return 0;
}

