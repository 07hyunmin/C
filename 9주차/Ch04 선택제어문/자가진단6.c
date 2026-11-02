#include <stdio.h>

int main(){
    int a = 0;
    scanf("%d", &a);
    if(a > 0){
        if(a % 2 == 0){
            printf("Even Number");
        }else{
            printf("Odd Number");
        }
    }else{
        printf("Non positive");
    }

    return 0;
}