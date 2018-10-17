#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int n;
	int i, j;
	printf("請輸入一個大於2的正奇數\n");
	scanf_s("%d", &n);

	for (i = 1; i <= (n + 1) / 2; i++)
	{
		for ( j = (n+1)/2-i; j >=1; j--)
		{
			printf(" ");
		}
		for ( j =1 ; j <= 2*i-1; j++)
		{
			printf("*");

		}
		printf("\n");
	}
	for (i = (n - 1) / 2; i >= 1; i--)
	{
		for (j = (n + 1) / 2 - i; j >= 1; j--)
		{
			printf(" ");
		}
		for (j = 1; j <= 2 * i - 1; j++)
		{
			printf("*");

		}
		printf("\n");
	}
	
	

	system("Pause");
	return 0;
}





