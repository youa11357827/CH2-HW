#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int i;
	int A;
	double BB;
	double TCh;
	double TCr;
	double CL;
	int money;
	for ( i = 1; i < 5; i--)
	{
		printf("Enter account number (-1 to end):");
		scanf_s("%d", &A);

		if (A == -1)
		{
			printf("\n");
			system("Pause");
			return 0;
		}

		else
		{

			printf("Enter beginning balance:");
			scanf_s("%lf", &BB);

			printf("Enter total charges:");
			scanf_s("%lf", &TCh);
		
			printf("Enter total credits:");
			scanf_s("%lf", &TCr);
		
			printf("Enter credit limit:");
			scanf_s("%lf", &CL);
			

			if ((BB+TCh)-TCr > CL)
			{
				printf("Account:      %d\n",A);
				printf("Credit limit: %g\n",CL);
				printf("Balance:      %g\n", (BB + TCh) - TCr);
				printf("Credit Limit Exceeded\n\n");
			}
		}
	}
}


