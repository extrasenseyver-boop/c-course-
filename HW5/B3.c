#include <stdio.h>
#include <inttypes.h>

int main(void)
{
    uint32_t a, b;
    scanf("%u%u", &a , &b);
    if (a && b <= 100)
    {
        if (a==b)
        {
         printf("%u", a*a);
        }
        else if (a<=b)
        {
            uint32_t square=0, sum=1;
            for (uint32_t i=b-a; i<=b; sum += square, i--)
            {
                square=a*a;
                a++;
            }
        printf("%u", sum-1);
        }
    }

    return 0;
}

