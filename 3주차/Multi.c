#include <stdio.h>

int main(){
    int a;
    int b;

    scanf("%d", &a);
    scanf("%d", &b);
    int temp;
    temp = b;

    while(temp > 0){
        printf("%d\n", a * (temp % 10));
        temp /= 10;
    }
    printf("%d", a * b);

    return 0;
}