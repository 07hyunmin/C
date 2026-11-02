#include <stdio.h>

int main(){
    int a, b;
    int sum = 0;
    int cnt = 0;
    int max;
    int min;
    scanf("%d %d", &a, &b);
    max = a;
    if(max < b){
        max = b;
        min = a;
    }else{
        min = b;
    }
    for(int i = min; i < max + 1; i++){
        if(i % 3 == 0 || i % 5 == 0){
            sum += i;
            cnt++;
        }
    }
    printf("sum : %d\navg : %.1f", sum, (double)sum / cnt);
    return 0;
}