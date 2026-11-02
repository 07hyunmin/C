#include <stdio.h>

int main(){
    int a = 0;
    int sum = 0;
    scanf("%d", &a);
    for(int i = a; i < 101; i++){
        sum += i;
    }
    printf("%d", sum);
    return 0;
}