#include <stdio.h>

int main(){
    int a, b = 0;
    scanf("%d %d", &a, &b);
    int max = (a > b) ? a : b;
    printf("%d", max);
    return 0;
}