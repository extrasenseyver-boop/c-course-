#include <stdio.h>

#define N 10

void imput (int nums[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

}

void SumMax (int nums[], int n)
{
    int sum = 0;
    int max_1 = nums[0];
    int max_2 = nums[1];
    int pos_max_1 = 0;

    for (int i = 1; i < n; i++)
    {
        if (max_1 < nums[i])
        {
            max_1 = nums[i];
            pos_max_1 = i;
        }
        //~ printf("max_1 = %d\n", max_1);

    }

    if (pos_max_1 == 0)
    {
        max_2 = nums[1];
    }
    else
    {
        max_2 = nums[0];
    }

    for (int i = 1; i < n; i++)
    {
        if (i == pos_max_1)
        {
            continue;
        }
        else if (max_2 < nums[i])
        {
            max_2 = nums[i];
        }

        //~ printf("max_2 = %d\n", max_2);

    }
    printf("%d", sum = max_1 + max_2);
}

int main(void)
{
    int nums[N];

    imput (nums, N);
    SumMax(nums, N);

    return 0;
}
