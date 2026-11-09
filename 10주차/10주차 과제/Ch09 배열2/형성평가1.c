#include <stdio.h>

int main(){
    int a[6] = {0};
    int b;
    for(int i = 0; i < 10; i++){
        scanf("%d", &b);
        a[b - 1]++;
    }
    for(int i = 0; i < 6; i++){
        printf("%d : %d\n", i + 1, a[i]);
    }
    return 0;
}