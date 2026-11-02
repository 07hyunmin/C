#include <stdio.h>

int main(){
    int a;
    int even = 0;
    int odd = 0;
    for(int i = 0; i < 10; i++){
        scanf("%d", &a);
        if(a % 2 == 0){
            even++;
        }else{
            odd++;
        }
    }
    printf("even : %d\nodd : %d", even, odd);
    return 0;
}