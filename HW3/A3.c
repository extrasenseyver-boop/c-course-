#include <stdio.h>

int main(void)
{
	int a, b, c;
	printf("Введите 3 числа\n");
	scanf("%d%d%d", &a, &b, &c);
	printf("%d+%d+%d=%d", a, b, c, a+b+c);
	return 0;
}

