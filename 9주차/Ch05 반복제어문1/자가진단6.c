#include <stdio.h>

int main(){
    int a = 0;
    while(1){
        printf("1. Korea\n2. USA\n3. Japan\n4. China\n");
        printf("number? \n");
        scanf("%d\n", &a);
        switch(a){
            case 1:
                printf("Seoul\n\n");
                break;
            case 2:
                printf("Washington\n\n");
                break;
            case 3:
                printf("Tokyo\n\n");
                break;
            case 4:
                printf("Beijing\n\n");
                break;
            default:
                printf("none");
                return 0;
        }
    }
    return 0;
}