#include <stdio.h>

int main(){
    while(1){
        int a = 0;
        scanf("%d", &a);
        if(a < 0 || a > 100){
            break;
        }
        if(a >= 80){
            printf("Pass\n");
        }else{
            printf("Fail\n");
        }
    }
    return 0;
}