#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int n,m;
	int i, j, k;
	printf("�п�J����(�����)\n");
	scanf_s("%d", &n);
	printf("�п�J�e��(�����)\n");
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