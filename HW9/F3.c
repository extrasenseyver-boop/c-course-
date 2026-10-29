#include <stdio.h>

void numCount (char num[])
{
    int count[10] = {0};

    for (int i = 0; num[i] != '\0'; i++)
    {
        count[num[i] - '0']++;
    }
    for (int i = 0; i < 10; i++)
    {
        if (count[i])
        {
            printf("%d %d\n", i, count[i]);
        }

    }

}


int main(void)
{
    char number[1001];
    scanf("%1000s", number);

    numCount (number);

    return 0;
}

