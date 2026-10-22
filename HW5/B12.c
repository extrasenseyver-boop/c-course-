#include <stdio.h>

int main(void)
{
    int number, last_num, max_num, min_num;
    scanf("%d", &number);

    max_num = number % 10;
    min_num = number % 10;
    number /= 10;

    while (number > 0)
    {
        last_num = number % 10;

        max_num = last_num > max_num ? last_num : max_num;
        min_num = last_num < min_num ? last_num : min_num;
        number /= 10;
    }

    printf("%d %d", min_num, max_num);

    return 0;
}
