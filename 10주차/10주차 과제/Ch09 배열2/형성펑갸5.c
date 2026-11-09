#include <stdio.h>

int main(){
    int a[3][4] = {0};
    int sum = 0;
    int sum1 = 0;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 3; j++){
            sum += a[i][j];
        }
        printf("%d\n", sum);
        sum1 += sum;
        sum = 0;
    }
    printf("%d", sum1);
    return 0;
}