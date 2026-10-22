/*
 * НОД (14, 35) = (14, 35%14)= НОД(14, 7) = НОД(14%7,7) = НОД(0, 7) = 7
 * (a, b), (a, b % a)
 */


#include <stdio.h>

int main(void)
{
    int num_x, num_y, num_a, num_b, temp;
    scanf("%d%d", &num_x, &num_y);

    if (!num_x || !num_y)
    {
        printf("0");
        return 0;
    }

    else if (num_x > num_y)
    {
        num_a = num_x;
        num_b = num_y;
    }
    else if (num_x < num_y)
    {
        num_a = num_y;
        num_b = num_x;
    }

    while (num_b)
    {
        temp = num_b;
        num_b = num_a % num_b;
        num_a = temp;
    }
    printf("%d", num_a);

    return 0;
}

