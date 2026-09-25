#include <stdio.h>

int main(void)
{
	int a, b, min, max;
	
	scanf("%d%d",  &a, &b);
	printf("%d %d", min = a<b ? a : b, max = a>b ? a : b);
	
	return 0;
}

