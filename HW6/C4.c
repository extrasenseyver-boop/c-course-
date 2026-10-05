#include <stdio.h>

int fx_func(int x)
{
    if (-2 <= x && x < 2)
    {
        x *= x;
    }
    else if (x >= 2)
    {
        x = x*x+4*x+5;
    }
    else if (x < -2)
    {
        x = 4;
    }

    return x;
}

    int main(void)
{
    int number, max = 0, result = 0;
    scanf("%d", &number);
    //~ printf("%d ", number);

    while (number)
    {
        result = fx_func (number);
        max = max>result ? max : result;
        scanf("%d", &number);
    }
    if (max>0)
    {
        printf("%d", max);
    }

    if (!number)
    return 0;
}

