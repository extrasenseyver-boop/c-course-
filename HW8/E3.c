
#include <stdio.h>

#define N 10

void imput (int nums[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

}

void PosMax (int nums[], int n)
{
    int max, i, pos_max = 1;
    max = nums[0];

    for (i = 1; i < n; i++)
    {
        if (max < nums[i])
        {
            max = nums[i];
            pos_max = i + 1;
        }

    }
    //~ printf("%d %d ", pos_max, max);
}

void PosMin (int nums[], int n)
{
    int min, i, pos_min = 1;
    min = nums[0];

    for (i = 1; i < n; i++)
    {
        if (min > nums[i])
        {
            min = nums[i];
            pos_min = i + 1;
        }

    }
    //~ printf("%d %d", pos_min, min);
}

int main(void)
{
    int nums[N];
    imput (nums, N);
    PosMax (nums, N);
    PosMin (nums, N);

    return 0;
}

