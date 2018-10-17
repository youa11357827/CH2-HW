#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int n,m;
	int i, j, k;
	printf("請輸入長度(正整數)\n");
	scanf_s("%d", &n);
	printf("請輸入寬度(正整數)\n");
	scanf_s("%d", &m);
	for (i = 1; i <= n; i++)
	{
		if (i == n || i == 1)
		{
			for (j = 1; j <= m; j++)
			{
				printf("+");
			}
			printf("\n");
		}

		else
		{
			for (k = 1; k <= m; k++)
			{
				if (k == 1 || k == m)
				{
					printf("+");
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");
		}
	}
	system("Pause");
	return 0;
}