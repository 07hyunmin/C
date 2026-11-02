#include <stdio.h>

int main(){
    char a = 'A';
    for(int i = 0; i < 26; i++){
        printf("%c", a);
        a++;
    }
    return 0;
}