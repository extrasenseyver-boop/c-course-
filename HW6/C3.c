#include <stdio.h>

int middle (int a, int b);

int main(void)
{
    unsigned int number1, number2;
    scanf("%d%d", &number1, &number2);
    printf("%d", middle(number1, number2));

    return 0;
}

int middle (int a, int b)
{
    int x = (a + b)/2;
    return x;
}
