#include <stdio.h>
#include <inttypes.h>

int main(void)
{
    uint32_t number, rem;
    scanf("%u", &number);
    if (number<=10)
        {
        printf("NO");
        }
    else if (number>=11)
        {
            //~ while (number > 0 && rem != number)
            while (number > 0)
            {
                rem = number % 10; //1|=1
                number /= 10;//1/10=0
                if (rem == number%10)
                {
                     break;
                }
            }
            printf("%s", rem == number%10 || rem==number ? "YES" : "NO");
        }
    return 0;
}

