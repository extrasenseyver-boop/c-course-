#include <stdio.h>

void factorial (int n)
{
    int result;

    while (n >= 1)
    {
        result *= n * (n - 1);
        n--;
    }
    printf("%d", result);
}

int main(void)
{
    int number;
    scanf("%d", &number);

    if (number > 20)
    {
        printf("0");
    }

    factorial(number);

    return 0;
}

