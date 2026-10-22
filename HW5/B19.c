#include <stdio.h>

int main(void)
{
    int num, lastNum;
    int sum = 0;
    scanf("%d", &num);

    while (num > 0)
    {
        lastNum = num % 10;
        sum += lastNum;
        num /= 10;
    }

    sum == 10 ? printf("YES") : printf("NO");

    return 0;
}

