#include <stdio.h>

int main(){
    int a = 0;
    int max = 0;
    int min = 100;
    while(1){
        scanf("%d", &a);
        if(a == 0){
            break;
        }
        if(a < 1 || a > 100){
            continue;
        }else{
            if(a > max){
                max = a;
            }
            if(a < min){
                min = a;
            }
        }
    }
    printf("MAX = %d\nMIN = %d", max, min);
    return 0;
}