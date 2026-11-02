#include <stdio.h>

int main(){
    int a;
    int num = 1;
    scanf("%d", &a);
    for(int i = 1; i < a + 1; i++){
        for(int j = 0; j < i; j++){
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
    return 0;
}