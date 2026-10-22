#include <stdio.h>

int main(void)
{
    int number, count_num = 0;

    scanf("%d", &number);

    if (!number)
    {
        printf("%d", number);
        return 0;
    }

    do
    {
        count_num += 1;
        scanf("%d", &number);
    } while (number);

    printf("%d", count_num);

    return 0;
}

