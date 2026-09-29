#include <stdio.h>
#include <inttypes.h>

int main(void)
{
    uint32_t sum, number, score=0;
    scanf("%u", &number);
    if (number >= 0 && number <= 10)
    {
        printf("%u", sum = number);
    }
    else if (number>=11)
    {
        uint32_t i=number;
        while (i>0)
        {
            i /=10;
            score++;
            //~ printf("%u-%u ", i, score);
        }
        sum = number%10;
        //~ printf("%u\n", score);

        for (uint32_t denominator=10; score>1; score--)
        {
        sum += (number/denominator)%10;
        denominator *= 10;
        //~ printf("%u %u ", sum, denominator);
        }
        printf("%u", sum);

    }
    return 0;
}

