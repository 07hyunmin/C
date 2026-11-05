#include <stdio.h>

int main(){
    int a[10];
    int b;
    int sum = 0;
    for(int i = 0; i < 10; i++){
        scanf("%d", &b);
        a[i] = b;
        sum += b;
    }
    printf("sum = %d\navg = %.1f", sum, (double)sum / 10);
    return 0;
}