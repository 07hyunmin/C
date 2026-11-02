#include <stdio.h>

int main(){
    int a;
    int num = 1;
    scanf("%d", &a);
    for(int i = 1; i <= a; i++){
        for(int j = 0; j < (i - 1) * 2; j++){
            printf(" ");
        }
        for(int j = 0; j < a - i + 1; j++){
            printf("%d ", num++);
        }
        printf("\n");
    }
    return 0;
}