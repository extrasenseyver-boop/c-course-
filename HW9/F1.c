#include <stdio.h>

void sort_array(int size, int a[])
{
    for (int i = 0; i < size; i++)
    {
        for (int j = size - 1; j > i; j--)
        {
            if (a[j - 1] > a[j])
            {
                int temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }

        }

    }

}


int main(void)
{
    int arr_size;
    scanf("%d", &arr_size);
    int arr[arr_size];

    for (int i = 0; i < arr_size; i++)
    {
        scanf("%d", &arr[i]);
    }
    sort_array(arr_size, arr);


    return 0;
}

