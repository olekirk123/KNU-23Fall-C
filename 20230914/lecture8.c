#include <stdio.h>
int main() {
    int score;
    printf("점수를 입력하세요:");
    scanf_s("%d", &score);

    if (score > 100 || score < 0)
        printf("잘못 입력했습니다");
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