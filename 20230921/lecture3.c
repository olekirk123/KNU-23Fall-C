#include <stdio.h>

int factorial(int n) 
{
    if (n == 0 || n == 1) 
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() 
{
    int num;
    printf("����� ���丮�� �� �Է� : ");
    scanf_s("%d", &num);

    printf("%d\n", factorial(num));
    return 0;
}
