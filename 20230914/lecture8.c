#include <stdio.h>
int main() {
    int score;
    printf("������ �Է��ϼ���:");
    scanf_s("%d", &score);

    if (score > 100 || score < 0)
        printf("�߸� �Է��߽��ϴ�");
    else {
        switch (score / 10)
        {
        case 10:
        case 9:
            printf("A");
            break;
        case 8:
            printf("B");
            break;
        case 7:
            printf("C");
            break;
        case 6:
            printf("D");
            break;
        default:
            printf("F");
        }
    }
}