#include <stdio.h>

void input (int nums[], int pos)
{
    for (int i = 0; i < pos; i++)
    {
        scanf("%d", &nums[i]);
    }

}

int min_num (int nums[], int pos)
{
    int min = nums[0], i;

    for (i = 1; i < pos; i++)
    {
        if (min > nums[i])
        {
            min = nums[i];
        }

    }
    return min;
}

int main(void)
{
    int pos = 5;
    int nums[pos];
    input (nums, pos);
    printf("%d", min_num (nums, pos));

    return 0;
}

