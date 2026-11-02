#include <stdio.h>

int main(){
    int a = 0;
    int odd = 0;
    int even = 0;
    while(1){
        scanf("%d", &a);
        if(a == 0){
            break;
        }
        if(a % 2 == 0){
            even++;
        }else{
            odd++;
        }
    }
    printf("odd : %d\neven : %d", odd, even);
    return 0;
}