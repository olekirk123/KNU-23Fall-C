#include <stdio.h>

int main(void)
{
	int a;
	printf("연도를 입력하세요:");
	scanf_s("%d", &a);
	int aa = (a % 4 == 0) && (a % 100 != 0) && (a % 400 == 0);

	if (aa)
		printf("윤년입니다.\n");
	else
		printf("윤년이 아닙니다.\n");
	return 0;
}