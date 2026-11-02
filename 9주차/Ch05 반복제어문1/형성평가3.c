#include <stdio.h>

int main(){
    int a = 0;
    int sum = 0;
    int cnt = 0;
    while(1){
        scanf("%d", &a);
        if(a < 0 || a > 100){
            break;
        }
        sum += a;
        cnt++;
    }
    printf("sum : %d\navg : %.1f", sum, (double)sum / cnt);
    return 0;
}