#include <stdio.h>

int main(void)
{
    int number, last_num, max_num, min_num, other_nums;
    scanf("%d", &number);

    while (number > 0)
    {
        last_num = number % 10;//53 1
        other_nums = number / 10;//53

        while (other_nums > 0)
        {
            max_num = last_num > other_nums % 10 ? last_num : other_nums % 10;//3//5
            min_num = last_num < other_nums % 10 ? last_num : other_nums % 10;//1

            other_nums /= 10;// 5
        }
        number /= 10;
    }
    printf("%d %d", min_num, max_num);

    return 0;
}

