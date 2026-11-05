#include <stdio.h>

int main(){
    int a[10];
    int A = 1;
    for(int i = 0; i < 10; i++){
        a[i] = A;
        A++;
    }
    for(int i = 0; i < 10; i++){
        printf("%d ", a[i]);
    }
    return 0;
}