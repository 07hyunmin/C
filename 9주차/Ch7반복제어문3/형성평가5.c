#include <stdio.h>

int main(){
    int a;
    char ch = 'A';
    int num = 0;
    scanf("%d", &a);
    for(int i = 1; i <= a; i++){
        for(int j = 0; j < a - i + 1; j++){
            printf("%c ", ch++);
        }
        for(int j = 0; j < i - 1; j++){
            printf("%d ", num++);
        }
        printf("\n");
    }
    return 0;
}