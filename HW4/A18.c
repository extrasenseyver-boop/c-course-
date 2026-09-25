#include <stdio.h>
#include <inttypes.h>

int main(void)
{
	int32_t a, b;
	scanf("%u%u", &a, &b);
	if (a>b)
	{
		printf("Above");
	}
	else if (a<b)
	{
		printf("Less");
	}
	else printf("Equal");
	
	return 0;
}

