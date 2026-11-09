#include <stdio.h>

int main(){
    int a[11] = {0};
    int b;
    while(1){
        scanf("%d", &b);
        if(b == 0){
            break;
        }
        a[b / 10]++;
    }
    for(int i = 10; i >= 0; i--){
        if(a[i] > 0){
            printf("%d : %d\n", i * 10, a[i]);
        }
    }
    return 0;
}