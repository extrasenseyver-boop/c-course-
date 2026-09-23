#include <stdio.h>

int main(void)
{
	float a,b,c;
	printf("Введите 3 числа\n");
	scanf("%f%f%f",&a,&b,&c);
	printf("%f+%f+%f/3=%f",a,b,c,a+b+c/3);
	return 0;
}

