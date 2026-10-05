#include <stdio.h>

int power_func (int a, int b);

int main(void)
{
    int number, p;
    scanf("%d%d", &number, &p);
    printf("%d", power_func (number, p));

    return 0;
}

int power_func (int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    int x = a;
    while ((b-1)>0)
    {
        x *= a;
        b--;
    }
    return x;
}
