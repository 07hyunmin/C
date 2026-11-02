#include <stdio.h>

int main(){
    int a = 0;
    int sum = 1;
    int num = 0;
    scanf("%d", &a);
    while(sum <= a){
        num += sum;
        sum++;
    }
    printf("%d", num);
    return 0;
}