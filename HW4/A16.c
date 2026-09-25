#include <stdio.h>
#include <inttypes.h>

int main(void)
{
	int32_t a, b, c;
	scanf("%u%u%u", &a, &b, &c);
	if (a<b && b<c)
	{
		printf("YES\n");
	}
	else printf("NO\n");
	
	return 0;
}

