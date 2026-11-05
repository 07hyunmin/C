#include <stdio.h>

int main(){
    int a[10];
    int b;
    int min = 1000;
    for(int i = 0; i < 10; i++){
        scanf("%d", &b);
        a[i] = b;
        if(b < min){
            min = b;
        }
    }
    printf("%d", min);
    return 0;
}