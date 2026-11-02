#include <stdio.h>

int main(){
    int sum = 0;
    int avg = 0;
    int a = 0;
    for(int i = 0; i < 5; i++){
        scanf("%d", &a);
        sum += a;
    }
    printf("sum : %d\navg : %.1f", sum, (double)sum / 5);
    return 0;
}