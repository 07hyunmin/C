#include <stdio.h>

int main(){
    int a, b;
    int max = 0;
    int min = 0;
    scanf("%d %d", &a, &b);
    max = a;
    if(b > max){
        max = b;
        min = a;
        for(int i = 1; i < 10; i++){
            for(int j = min; j < max + 1; j++){
                printf("%d * %d = %2d   ", j, i, j * i);
            }
            printf("\n");
        }
    }else{
        min = b;
        for(int i = 1; i < 10; i++){
            for(int j = max; j >= min; j--){
                printf("%d * %d = %2d   ", j, i, j * i);
            }
            printf("\n");
        }
    }
    return 0;
}