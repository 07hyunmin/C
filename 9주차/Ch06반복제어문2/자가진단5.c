#include <stdio.h>

int main(){
    int a = 0;
    int a3 = 0;
    int a5 = 0;
    for(int i = 0; i < 10; i++){
        scanf("%d", &a);
        if(a % 5 == 0){
            a5++;
        }if(a % 3 == 0){
            a3++;
        }
    }
    printf("Multiples of 3 : %d\nMultiples of 5 : %d", a3, a5);
    return 0;
}