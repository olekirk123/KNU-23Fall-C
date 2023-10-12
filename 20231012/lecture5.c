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

    printf("변수 x의 값: %d\n", x);
    printf("변수 y의 값: %d\n", y);

    swap(&x, &y);

    printf("변수 x의 값 (바뀜): %d\n", x);
    printf("변수 y의 값 (바뀜): %d\n", y);

    return 0;
}