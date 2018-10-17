#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int i;
	double LP;
	double IR;
	double d;
	for (i = 1; i < 5; i--)
	{
		printf("Enter loan principal (-1 to end):");
		scanf_s("%lf", &LP);

		if (LP == -1)
		{
			printf("\n");
			system("Pause");
			return 0;
		}

		else
		{
			printf("Enter interest rate:");
			scanf_s("%lf", &IR);
			printf("Enter term of the loan in days:");
			scanf_s("%lf", &d);
			printf("The interest charge is: $%.2f\n\n",LP*IR*d/365+0.005
			);
		}

	}
}


