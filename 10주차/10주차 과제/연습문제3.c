#include <stdio.h>

int main(){
    int a[100];
    int cnt = 0;
    for(int i = 0; i < 100; i++){
        scanf("%d", &a[i]);
        if(a[i] == 0){
            break;
        }
        cnt++;
    }
    for(int i = 1; i < cnt; i+=2){
        printf("%d ", a[i]);
    }
    return 0;
}