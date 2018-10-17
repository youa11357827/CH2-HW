#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int i,j;
	int n;
	printf("請輸入一個正整數:");
	scanf_s("%d", &n);
	printf("(A)\n");
	for (i = 1; i <= n; i++)
	{
		for ( j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	//--------------------------------------------------------------------------------------
	printf("(B)\n");
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n-i+1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	//--------------------------------------------------------------------------------------
	printf("(C)\n");
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i-1; j++)
		{
			printf(" ");
		}

		for (j = 1; j <= n - i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	//--------------------------------------------------------------------------------------
	printf("(D)\n");
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n-i; j++)
		{
			printf(" ");
		}

		for (j = 1; j <= i ; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");

	system("pause");
	return 0;
}


