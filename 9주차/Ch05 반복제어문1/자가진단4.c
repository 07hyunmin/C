#include <stdio.h>

int main(){
    int a = 0;
    int small = 0;
    int large = 0;
    while(1){
        scanf("%d", &a);
        if(a < 50){
            small++;
        }else{
            large++;
        }
        if(a >= 100){
            break;
        }
    }
    printf("small : %d\nlarge : %d", small, large);
    return 0;
}