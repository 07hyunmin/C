#include <stdio.h>

int main(){
    int a, b = 0;
    scanf("%d %d", &a, &b);
    int max = (a > b) ? a : b;
    int min = (a > b) ? b : a;
    printf("%d", max - min);

    return 0;
}