#include <stdio.h>

int isPrime(int num)
{
	for (int div = num - 1; div > 1; div--)
	{
		if (num % div == 0) return 0;
	}
}

int main(void)
{
	int num;
	printf("�Ҽ����� Ȯ���� ���� �Է��ϼ��� : ");
	scanf_s("%d", &num);

	printf("%d\n", isPrime(num));

		return 0;
}

