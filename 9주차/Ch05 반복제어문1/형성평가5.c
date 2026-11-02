#include <stdio.h>

int main(){
    int w = 0;
    int h = 0;
    char c = ' ';
    while(1){
        scanf("%d %d", &w, &h);
        printf("Triangle width = %.1f", (double)(w * h) / 2);
        printf("\nContinue? ");
        scanf(" %c", &c);
        if(c == 'Y' || c == 'y'){
            continue;
        }else{
            break;
        }
    }

    return 0;
}