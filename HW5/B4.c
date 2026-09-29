#include <stdio.h>
#include <inttypes.h>

int main(void)
{
    uint32_t number;
    scanf("%u", &number);
    if (number >= 100 && number <= 999)
    {
        printf("YES");
    }
    else printf("NO");

    return 0;
}

