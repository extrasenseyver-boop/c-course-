#include <stdio.h>
#include <inttypes.h>

int main(void)
{
    enum SymNum
    {
        NUM_1=1,
        NUM_2=2,
        NUM_3=3,
        NUM_4=4,
        NUM_5=5,
        NUM_6=6,
        NUM_7=7,
        NUM_8=8,
        NUM_9=9,
        NUM_0=0
    };

    uint32_t number, rem;
    scanf("%u", &number);

    uint32_t score_1 = 0;
    uint32_t score_2 = 0;
    uint32_t score_3 = 0;
    uint32_t score_4 = 0;
    uint32_t score_5 = 0;
    uint32_t score_6 = 0;
    uint32_t score_7 = 0;
    uint32_t score_8 = 0;
    uint32_t score_9 = 0;
    uint32_t score_0 = 0;

    while (number > 0)
    {
        rem = number % 10;// 12=1| 2, 1=| 1
        number /= 10;//12= 1, 1= 0

        rem == NUM_1 ? score_1++ : 0;
        rem == NUM_2 ? score_2++ : 0;
        rem == NUM_3 ? score_3++ : 0;
        rem == NUM_4 ? score_4++ : 0;
        rem == NUM_5 ? score_5++ : 0;
        rem == NUM_6 ? score_6++ : 0;
        rem == NUM_7 ? score_7++ : 0;
        rem == NUM_8 ? score_8++ : 0;
        rem == NUM_9 ? score_9++ : 0;
        rem == NUM_0 ? score_0++ : 0;
    }
    if (score_1 == 2) printf("YES");
    else if (score_2 == 2) printf("YES");
    else if (score_3 == 2) printf("YES");
    else if (score_4 == 2) printf("YES");
    else if (score_5 == 2) printf("YES");
    else if (score_6 == 2) printf("YES");
    else if (score_7 == 2) printf("YES");
    else if (score_8 == 2) printf("YES");
    else if (score_9 == 2) printf("YES");
    else if (score_0 == 2) printf("YES");
    else printf("NO");

    return 0;
}

