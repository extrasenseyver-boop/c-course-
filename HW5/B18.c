#include <stdio.h>

int main(void)
{
    int num;
    int i;
    int f1 = 1;
    int f2 = 1;
    int m;

    scanf("%d", &num);

    if (num == 1)
        printf("1");

    else if (num)
    {
        printf("1 1 ");

        for (i = 2; i < num; i++)
        {
            m = f1 + f2;
            f1 = f2;
            f2 = m;
            printf("%d ", f2);
        }

    }
    return 0;
}

