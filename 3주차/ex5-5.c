#include <stdio.h>

int main(){
    int score;
    char b;

    printf("결과 점수를 입력하세요(0~100): ");
    scanf("%d", &score);

    switch(score/10){
        case 9:
            b = 'A';
            break;
        case 8:
            b = 'B';
            break;
        case 7:
            b = 'C';
            break;
        case 6:
            b = 'D';
            break;
        default:
            b = 'F';
    }
    printf("%c", b);

    return 0;
}