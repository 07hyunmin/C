#include <stdio.h>

int main(){
    int a[10] = {0};
    int b;
    while(1){
        scanf("%d", &b);
        if(b > 10 || b < 1){
            break;
        }
        a[b - 1]++;
    }
    for(int i = 0; i < 10; i++){
        if(a[i] > 0){
            printf("%d : %d\n", i + 1, a[i]);
        }
    }
    return 0;
}