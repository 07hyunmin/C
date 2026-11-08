#include <stdio.h>

int main(){
    int a[3][3] = {0};
    int sum = 0;
    int sum2 = 0;
    int sum3 = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", a[i][j]);
            sum += a[i][j];
        }
        printf("%d", sum);
        sum = 0;
        printf("\n");
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            sum2 += a[j][i];
        }
        printf("%d ", sum2);
        sum3 += sum2;
        sum2 = 0;
    }
    printf("%d", sum3);
    return 0;
}