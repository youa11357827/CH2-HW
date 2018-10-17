#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int i;

	double d;

	for (i = 1; i < 5; i--)
	{
		printf("Enter sales in dollars (-1 to end):");
		scanf_s("%lf", &d);

		if (d == -1)
		{
			printf("\n");
			system("Pause");
			return 0;
		}

		else
		{
				printf("Salary is: $%g\n\n",0.09*d+200);
		}
		
	}
}


