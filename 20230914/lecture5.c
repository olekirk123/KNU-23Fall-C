#include <stdio.h>

int main(void)
{
	int a;
	printf("������ �Է��ϼ���:");
	scanf_s("%d", &a);
	int aa = (a % 4 == 0) && (a % 100 != 0) && (a % 400 == 0);

	if (aa)
		printf("�����Դϴ�.\n");
	else
		printf("������ �ƴմϴ�.\n");
	return 0;
}