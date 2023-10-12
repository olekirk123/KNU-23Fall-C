#include <stdio.h>

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() 
{
    int x = 10;
    int y = 20;

    printf("���� x�� ��: %d\n", x);
    printf("���� y�� ��: %d\n", y);

    swap(&x, &y);

    printf("���� x�� �� (�ٲ�): %d\n", x);
    printf("���� y�� �� (�ٲ�): %d\n", y);

    return 0;
}