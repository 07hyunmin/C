#include <stdio.h>

int main(){
    int a[10];
    int max, min;
    int b;
    for(int i = 0; i < 10; i++){
        scanf("%d", &b);
        if(a[i] == b){
            max = b;
            min = b;
        }
        if(b > max){
            max = b;
        }
        if(b < min){
            min = b;
        }
    }
    printf("%d %d", max, min);
    return 0;
}