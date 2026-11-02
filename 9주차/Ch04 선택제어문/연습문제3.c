#include <stdio.h>

int main(){
    int a = 0;
    scanf("%d", &a);

    if(a % 2 == 0){
        printf("Happy.");
    }else{
        printf("Lonely.");
    }

    return 0;
}