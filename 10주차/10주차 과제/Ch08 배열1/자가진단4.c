#include <stdio.h>

int main(){
    double a[] = {0, 85.6, 79.5, 83.1, 80.0, 78.2, 75.0};
    int b, c;
    scanf("%d %d", &b, &c);
    printf("%.1f", a[b] + a[c]);
    return 0;
}