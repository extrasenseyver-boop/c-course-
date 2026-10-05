#include <stdio.h>

int func(int num);

int main(void)
{
    int num;
    scanf("%d", &num);
    printf("%d", func (num));

    return 0;
}

int func(int num)
{
    return (num<0) ? -num:num;
}
