#include <stdio.h>

void power_func (int num, int p)
{
    int remainder;

    if (num > 0)
    {
        remainder = num % p;
        power_func (num /= p, p);
        printf("%d", remainder);
    }
}



int main(void)
{
    int number, power;

    scanf("%d%d", &number, &power);

    if (!number)
        {
        printf("%d", number);
            return 0;
        }
    else if (number >= 1 && power <= 9 && power >= 2)

        power_func (number, power);

    return 0;
}

