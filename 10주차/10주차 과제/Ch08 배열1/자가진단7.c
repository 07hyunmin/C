#include <stdio.h>

int main(){
    int a[10];
    int b;
    int esum = 0;
    int osum = 0;
    for(int i = 0; i < 10; i++){
        scanf("%d", &b);
        a[i] = b;
        if(i % 2 != 0){
            esum += b;
        }else{
            osum += b;
        }
    }
    printf("sum : %d\navg : %.1f", esum, (double)osum / 5);
    return 0;
}