#include <stdio.h>

int main(){
    int a[26] = {0};
    char b;
    while(1){
        scanf(" %c", &b);
        if(b < 'A' || b > 'Z'){
            break;
        }
        a[b - 'A']++;
    }
    for(int i = 0; i < 26; i++){
        if(a[i] > 0){
            printf("%c : %d\n", (char)('A' + i), a[i]);
        }
    }
    return 0;
}