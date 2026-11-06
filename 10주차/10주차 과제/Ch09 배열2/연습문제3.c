#include <stdio.h>

int main(){
    int a[21] = {0, 1};
    for(int i = 1; i < 21; i++){
        a[i + 1] = a[i - 1] + a[i];
    }
    for(int i = 1; i < 21; i++){
        printf("%d ", a[i]);
    }
    return 0;
}