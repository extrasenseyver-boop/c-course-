#include <stdio.h>

#define N 10

void input (int nums[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

}

void SumPositiv (int nums[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] >= 0)
        {
            sum += nums[i];
        }

    }
    printf("%d", sum);
}

int main(void)
{
    int nums[N];
    input (nums, N);
    SumPositiv (nums, N);

    return 0;
}

