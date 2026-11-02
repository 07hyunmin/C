#include <stdio.h>

int main(){
    int cnt = 0;
    int sum = 0;
    int avg = 0;
    int a = 0;
    while(1){
        scanf("%d", &a);
        if(a == 0){
            break;
        }
        sum += a;
        cnt ++;
    }
    printf("cnt = %d\nsum = %d\navg = %.2f", cnt, sum, (double)sum / cnt);
    return 0;
}