#include <stdio.h>

int main(void)
{
	int n, nmax, a, b, c;
	scanf("%d", &n);
	a = n%10;  
	b = (n/10)%10; 
	c = (n/100)%10; 
	nmax = a>b ? a : b;
	nmax = nmax>c ? nmax : c;
	printf("%d", nmax);
	
	return 0;
}

