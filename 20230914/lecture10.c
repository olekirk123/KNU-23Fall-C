// 구구단 2~9단 출력
// 5단은 미출력
#include <stdio.h>

int main(void)
{
	int i, n;
	for (i = 2; i < 10; i++) {
	if (i == 5) continue;
	for (n = 1; n < 10; n++)
		printf("%d * %d = %d\n", i, n, i * n);
}
	return 0;
}