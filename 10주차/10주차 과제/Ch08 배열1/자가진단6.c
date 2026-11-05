#include <stdio.h>

int main(){
    int a[100];
    int b;
    int max = 0;
    int min = 1000;
    int cnt = 0;
    while(1){
        scanf("%d", &b);
        if(b == 0){
            break;
        }
        a[cnt] = b;
        cnt++;
        if(b > max){
            max = b;
        }
        if(b < min){
            min = b;
        }
    }
    printf("%d", max - min);
    return 0;
}