#include <stdio.h>

int main(){
    for(int i = 1; i < 10; i++){
        for(int j = 2; j < 5; j++){
            printf("%d * %d = %2d   ", j, i, i * j);
        }
        printf("\n");
    }
    return 0;
}