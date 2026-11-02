#include <stdio.h>

int main(){
    int a = 0;
    scanf("%d", &a);
    for(int i = 1; i < a + 1; i++){
        if(i % 2 == 0){
            printf("%d ", i);
        }
    }
    return 0;
}