// "Пух, чего тебе намазать? Мёду или сгущённого молока? 

#include <stdio.h>

int main(void)
{
	int sgushonnoe_moloko = 1;
	int med = 1;
	int hleb = 0;
	
	if (sgushonnoe_moloko && med && !hleb) 
	{
		printf("\n");
		printf("sgushonnoe_moloko && med && !hleb\n");
		printf("\n");
		printf("Сгущённого молока и мёда и можно без хлеба\n");
	}
	
	return 0;
}

