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
	printf("�п�J�~�Q�v(�ʤ���)");
	scanf_s("%lf",&r);
	r = r / 100;
	for (i = 1; i <= 15; i++)
	{
	
		p = d * r;
		d = d + p;
		s = d + p;
	
		printf("��%d�~���`���B�O%.2f���A�~�Q�v�O�ʤ���%g\n", i,d+0.005,r*100);

	}
	
			system("Pause");
			return 0;
	
}


