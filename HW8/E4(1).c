#include <stdio.h>

#define N 10

void input (int nums[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

}

void SumMax (int nums[], int n)
{
    int max_1 = nums[0];
    int max_2 = nums[1];
    int sum;

    for (int i = 1; i < n; i++)
    {
        if (max_1 < nums[i])
        {
            max_2 = max_1;
            max_1 = nums[i];
        }
        else if (max_2 < nums[i])
        {
            max_2 = nums[i];
        }

    }
    //~ printf("max_1 = %d, max_2 = %d\n", max_1, max_2);
    printf("%d", sum = max_1 + max_2);
}

int main(void)
{
    int nums[N];
    input (nums, N);
    SumMax (nums, N);

    return 0;
}

