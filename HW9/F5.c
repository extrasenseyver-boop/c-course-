#include <stdio.h>

int find_max_array(int size, int a[])
{
    int i = size - 1;
    int max = a[i];
    for (; i >= 0; i--)
    {
        if (a[i] > max)
        {
            max = a[i];
        }

    }
    //~ printf("%d", max);
    return max;
}



int main(void)
{
    int size = 4;
    int a[] = {1, 2, 4, 3};
    find_max_array(size, a);

    return 0;
}

