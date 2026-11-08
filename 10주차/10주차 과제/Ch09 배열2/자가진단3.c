#include <stdio.h>

int main(){
    int a[100] = {100, 0};
    int cnt = 2;
    scanf("%d", &a[1]);
    while(1){
        a[cnt] = a[cnt -2] - a[cnt -1];
        if(a[cnt] < 0){
            break;
        }
        cnt++;
    }
    for(int i = 0; i < cnt + 1; i++){
        printf("%d ", a[i]);
    }
    return 0;
}