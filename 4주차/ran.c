#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int user;
    int com;
    int count = 0;

    srand(time(NULL));

    com = rand() % 100 + 1;

    printf("1~100 사이의 숫자를 맞추자\n");

    while(1){
        printf("1~100 사이의 숫자를 입력하자\n");
        scanf("%d", &user);
        count++;

        if(user < com){
            printf("보다 크다\n");
        }
        else if(user > com){
            printf("보다 작다\n");
        }
        else{
            printf("%d!정답이다\n", user);
            printf("%d번 반복만에 맞췄다\n", count);
            break;
        }
    }
    return 0;
}