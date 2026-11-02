#include <stdio.h>

int main(){
    int a = 0;
    int sum = 0;
    scanf("%d", &a);
    for(int i = 1; i < a + 1; i++){
        if(i % 5 == 0){
            sum += i;
        }
    }
    printf("%d", sum);
    return 0;
}