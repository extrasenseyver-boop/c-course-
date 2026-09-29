#include <stdio.h>
#include <inttypes.h>

int main(void)
{
    uint32_t i = 1, number;
    scanf("%u", &number);
    if (number<=100)
        {
            while (i<=number)
            {
                printf("%u %u %u\n", i, i*i, i*i*i);
                i++;
            }
        }
    return 0;
}

