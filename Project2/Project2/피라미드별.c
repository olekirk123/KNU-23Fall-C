#include <stdio.h>
int main(void)
{
	int a,b,c,num;
	printf("�����Է�\n");
	scanf_s("%d", &num);

	for (a = 0; a < num; a++)
	{
		for (b = a; b <= num - 1; b++) {
			printf(" ");
		}
		for (c = 0; c <= (a * 2); c++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}