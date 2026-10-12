#include <stdio.h>

void reverse_order (int number)
{
    int last_num;

    if (number > 0)
    {
        last_num = number % 10;
        printf("%d ", last_num);
        reverse_order (number / 10);
    }
}

int main(void)
{
    int number;
    scanf("%d", &number);
    reverse_order (number);
    if (!number)
        printf("%d", number);

    return 0;
}

