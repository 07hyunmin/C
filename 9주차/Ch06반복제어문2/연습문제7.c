#include <stdio.h>

int main(){
    int a = 1;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("%d ", a);
        }
        printf("\n");
        a++;
    }
    printf("\n");
    for(int i = 0; i < 5; i++){
        for(int j = 1; j < 6; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}