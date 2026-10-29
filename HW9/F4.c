#include <stdio.h>

void print_digit(char s[])
{
    int count_num [10] = {0};

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            count_num[s[i] - '0']++;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        if (count_num[i])
        {
            printf("%d %d\n", i, count_num[i]);
        }

    }

}

int main(void)
{
    char s[18] = "Hello123 world77.";
    print_digit(s);

    return 0;
}

