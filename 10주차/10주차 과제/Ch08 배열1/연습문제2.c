#include <stdio.h>

int main(){
    int a[26];
    char A = 'A';
    for(int i = 0; i < 26; i++){
        a[i] = A;
        A++;
    }
    for(int i = 25; i >= 0; i--){
        printf("%c ", a[i]);
    }
    return 0;
}