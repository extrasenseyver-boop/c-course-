#include <stdio.h>

int main(void)
{
    int number;
    scanf("%d", &number);

    if (!number)
    {
        printf("0");
        return 0;
    }

    for (int iter = 11; iter <= number; iter++)
    {
        int last_num, sum = 0, product = 1;

        for (int temp = iter; temp > 0; temp /= 10)
        {
            last_num = temp % 10;

            sum += last_num;
            product *= last_num;
        }
        if (sum == product)
        {
            printf("%d ", iter);
        }
    }

    return 0;
}

