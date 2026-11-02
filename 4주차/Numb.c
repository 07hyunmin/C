#include <stdio.h> 

void pnum(int n){
    if(n == 0){
        return;
    }
    pnum(n-1);
    printf("%d\n", n);
}

int main(void){
    int n;
    scanf("%d", &n);
    pnum(n);
    return 0;
}