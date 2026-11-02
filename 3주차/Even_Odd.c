#include <stdio.h>

int main(){
    int a;
    printf("정수를 입력: ");
    scanf("%d", &a);

    printf("%s", (a % 2 == 0)?"Even":"Odd");
    return 0;
}