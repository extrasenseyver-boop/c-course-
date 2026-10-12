#include <stdio.h>

int order (int number)
{
    if (number>1)
        order(number-1);
    return printf("%d ", number);
}

int main(void)
{
    int number;
    scanf("%d", &number);
    order(number);

    return 0;
}

