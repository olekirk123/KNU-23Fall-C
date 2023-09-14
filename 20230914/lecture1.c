#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;
	printf("1.정수 입력");
	scanf_s("%d", &num);
	printf("2.정수 출력: 입력한 정수는 %d", num);
	return 0;
}