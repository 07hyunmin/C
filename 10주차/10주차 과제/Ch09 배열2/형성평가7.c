#include <stdio.h>

int main(){
    int a[2][4] = {0};
    int sum = 0;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 2; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 2; j++){
            sum += a[i][j];
        }
        printf("%d ", sum / 2);
        sum = 0;
    }
    printf("\n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 4; j++){
            sum += a[j][i];
        }
        printf("%d ", sum / 4);
        sum = 0;
    }
    printf("\n");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 2; j++){
            sum += a[i][j];
        }
    }
    printf("%d ", sum / 8);
    return 0;
}