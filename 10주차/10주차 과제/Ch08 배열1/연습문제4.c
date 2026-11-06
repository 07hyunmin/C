#include <stdio.h>

int main(){
    int a[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int b;
    while(1){
        scanf("%d", &b);
        if(b < 1 || b > 12){
            break;
        }
        printf("%d\n", a[b - 1]);
    }
    return 0;
}