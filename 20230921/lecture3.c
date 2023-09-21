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
    printf("계산할 팩토리얼 값 입력 : ");
    scanf_s("%d", &num);

    printf("%d\n", factorial(num));
    return 0;
}
