#include <stdio.h>

int main(){
    int a = 0;
    while(1){
        scanf("%d", &a);
        if(a == 0){
            break;
        }
        if(a > 0){
            printf("positive number\n");
        }else{
            printf("negative number\n");
        }
    }
    return 0;
}