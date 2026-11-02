#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    for(int i = a; i > 0; i--){
        for(int j = 0; j < a - i; j++){
            printf(" ");
        }
        for(int j = 1; j <= i * 2 - 1; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}