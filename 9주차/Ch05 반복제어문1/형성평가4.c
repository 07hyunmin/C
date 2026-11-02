#include <stdio.h>

int main(){
    int a = 0;
    int cnt = 0;
    while(1){
        scanf("%d", &a);
        if(a == 0){
            break;
        }
        if(a % 3 == 0 || a % 5 == 0){
            continue;
        }else{
            cnt++;
        }
    }   
    printf("%d", cnt);
    return 0;
}