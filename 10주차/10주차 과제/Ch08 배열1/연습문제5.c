#include <stdio.h>

int main(){
    int a[100];
    int b;
    int c;
    int max = 0;
    scanf("%d", &b);
    for(int i = 0; i < b; i++){
        scanf("%d", &c);
        a[i] = c;
        if(c > max){
            max = c;
        }
    }
    printf("%d", max);
    return 0;
}