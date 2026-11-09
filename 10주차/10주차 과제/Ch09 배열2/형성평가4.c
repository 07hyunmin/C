#include <stdio.h>

int main(){
    int a[20] = {0};
    int b;
    int tmp = 0;
    scanf("%d", &b);
    for(int i = 0; i < b; i++){
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < b - 1; i++){
        for(int j = 0; j < b - 1 - i; j++){
            if(a[j] < a[j + 1]){
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
    for(int i = 0; i < b; i++){
        printf("%d\n", a[i]);
    }
    return 0;
}