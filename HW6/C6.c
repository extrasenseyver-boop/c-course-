#include <stdio.h>
//~ #include <inttypes.h>

unsigned long long hCell (int nsq)
{
    if (nsq<=2)
    {
        return nsq;
    }

    else
    {
        unsigned long long result = 1;
        int power = nsq - 1;//28-1=27

        while (power>0)
        {
            result *= 2;
            power--;
        }

    return result;
    }
}

int main(void)
{
    int numsq;
    scanf("%d", &numsq);

    if (numsq >= 1 && numsq <= 64)
    {
        printf("%llu", hCell(numsq));
    }

    return 0;
}
