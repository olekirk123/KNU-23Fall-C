#include <stdio.h>

int main(void)
{
	int input_num;
	printf("���� �Է�:");
	scanf_s("d", &input_num);

	if (input_num > 0)
		printf("���� ���� (%d)\n", input_num);
	else if (input_num < 0)
		printf("���� ���� (%d)\n", input_num);
	else
		printf("0");
	return 0;
}