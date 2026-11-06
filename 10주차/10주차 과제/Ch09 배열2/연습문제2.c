#include <stdio.h>

int main(){
    int a[10] = {0};
    int b;
    while(1){
        scanf("%d", &b);
        if(b == 0){
            break;
        }
        a[b % 10]++;
    }
    for(int i = 0; i < 9; i++){
        if(a[i] > 0){
            printf("%d : %d\n", i, a[i]);
        }
    }
    return 0;
}