#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(void)
{
	double x = 0;
	double y = 0;
	int count = 0, circle = 0;
	srand(time(NULL));
	
	while (count < 10000)
	{
		x = (double)rand() / (double)RAND_MAX;
		y = (double)rand() / (double)RAND_MAX;

		if (sqrt(x * x + y * y) <= 1.0)
		{
			circle++;
		}
		
		if (count % 10000000 == 0)
		{
			printf("%d ����.. ������ : \n",count)
		}
	}
	

	printf("������: ",);

	return 0;
}