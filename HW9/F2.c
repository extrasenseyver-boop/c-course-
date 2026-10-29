#include <stdio.h>

void sort_even_odd(int n, int a[])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            if ((a[j] % 2 == 0 || a[j] == 0) && a[j - 1] % 2 != 0)//1234567//1234657//1243657//2143657//
            {
                int temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }

        }

    }

}


int main(int argc, char **argv)
{

    return 0;
}

