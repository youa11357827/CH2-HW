#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int i, j;
	int a, b, c;
	printf("請輸入一個正整數:\n");
	for (i = 1; i <= 30; i++)
	{
		for (j = 1; j < i; j++)
		{
			a = i*i - j*j ;
			b = 2 * i*j;
			c = j * j + i * i;
			if (a<500&&b<500&&c<500)
			{
				printf("(%d,%d,%d)", a, b, c);
				printf("\n");
			}
			
		}
		
	}
	printf("\n");
	system("pause");
	return 0;
}


