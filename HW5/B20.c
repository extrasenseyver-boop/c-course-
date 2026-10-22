#include <stdio.h>

int main(void)
{
    int num;
    scanf("%d", &num);

    for (int i = 2; i <= num / i; i++)
        {
            if (num % i == 0)
            {
                printf("NO");
                return 0;
            }

        }
    if (num == 1 || num == 0)
        printf("NO");

    else
        printf("YES");

    return 0;
}

