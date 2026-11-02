#include <stdio.h>

int main(){
    int a, b;
    int max = 0;
    int min = 0;
    scanf("%d %d", &a, &b);
    max = a;
    if(b > max){
        max = b;
        min = a;
    }else{
        min = b;
    }
    for(int i = min; min < max + 1; min++){
        printf("%d ", i);
        i++;
    }
    return 0;
}