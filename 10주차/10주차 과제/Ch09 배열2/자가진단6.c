#include <stdio.h>

int main(){
    int a[4][5] = {0};
    int sum = 0;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 4; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 4; j++){
            sum += a[i][j];
        }
        printf("%d ", sum);
        printf("%.1f\n", (double)sum / 4);
        sum = 0;
    }
    return 0;
}