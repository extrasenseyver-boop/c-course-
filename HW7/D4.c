#include <stdio.h>

void print_num (int num)
{
    int last_num;

    if (num > 0)
    {
        last_num = num % 10;

        if (last_num != num)
            print_num (num / 10);
    }
    printf("%d ", last_num);
}

int main(void)
{
    int number;
    scanf("%d", &number);
    if (!number)
    {
        printf("%d", number);
        return 0;
    }
    else
        print_num (number);

    return 0;
}

