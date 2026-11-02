#include <stdio.h>

int main(){
    int a = 0;
    int even = 0;
    for(int i = 0; i < 10; i++){
        scanf("%d", &a);
        if(a % 2 == 0){
            even++;
        }
    }
    printf("Even numbers = %d", even);
    return 0;
}