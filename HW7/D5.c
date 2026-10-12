#include <stdio.h>

void bin_num (int num)
{
    int remainder;

    if (num > 0)
    {
        remainder = num % 2;
        bin_num (num /= 2);
        printf("%d", remainder);
    }
}

int main(void)
{
    int number;
    scanf("%d", &number);
    if (!number)
    {
        printf("%d",number);
            return 0;
    }
    bin_num (number);

    return 0;
}

