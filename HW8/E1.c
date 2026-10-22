#include <stdio.h>

void input(float nums[], int pos)
{
    for (int i = 0; i < pos; i++)
    {
        scanf("%f", &nums[i]);
    }

}

void arithmetic_mean(float nums[], int pos)
{
    float sum = 0, result;
    for (int i = 0; i < pos; i++)
    {
        sum += nums[i];
    }
    printf("%3f", result = sum / pos);
}

int main(void)
{
    int pos = 5;
    float nums[pos];
    input(nums, pos);
    arithmetic_mean(nums, pos);

    return 0;
}
