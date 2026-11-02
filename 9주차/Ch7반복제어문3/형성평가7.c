#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    for(int i = 1; i <= a; i++){
        for(int j = 0; j < i; j++){
            if(j == i - 1) printf("#");
            else printf("# ");
        }
        printf("\n");
    }
    for(int i = 1; i < a; i++){
        for(int j = 0; j < i * 2; j++){
            printf(" ");
        }
        for(int j = 0; j < a - i; j++){
            if(j == a - i - 1) printf("#");
            else printf("# ");
        }
        printf("\n");
    }
    return 0;
}