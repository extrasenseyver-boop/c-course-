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
            for (uint32_t i=b-a ; i<=b; i--)
            {
                printf("%u ", a*a);
                a++;

            }
        }
    }

    return 0;
}

