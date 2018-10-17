#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int i;
	double r;
	double d;
	double s;
	double p;
	d = 5000;
	printf("請輸入年利率(百分之)");
	scanf_s("%lf",&r);
	r = r / 100;
	for (i = 1; i <= 15; i++)
	{
	
		p = d * r;
		d = d + p;
		s = d + p;
	
		printf("第%d年的總金額是%.2f元，年利率是百分之%g\n", i,d+0.005,r*100);

	}
	
			system("Pause");
			return 0;
	
}


