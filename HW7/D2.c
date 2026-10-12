#include <stdio.h>

int sum(int number)
{
    if (!number)
        return 0;

    else if (number)
        return 1;

    else return number + sum(number - 1);
}

int main(void)
{
    int number;
    scanf("%d", &number);
    printf("%d", sum(number));

    return 0;
}

