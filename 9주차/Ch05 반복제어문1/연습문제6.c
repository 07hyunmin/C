#include <stdio.h>

int main(){
    int a = 0;
    while(1){
        printf("1. Input\n2. Output\n3. Delete\n4. Finish\n");
        printf("Enter number: \n");
        scanf("%d\n", &a);
        switch(a){
            case 1:
                printf("You selected Input.\n\n");
                break;
            case 2:
                printf("You selected Output.\n\n");
                break;
            case 3:
                printf("You selected Delete.\n\n");
                break;
            case 4:
                printf("You selected Finish.\n\n");
                return 0;
            default:
                printf("Wrong input.\n\n");
                break;
        }
    }
    return 0;
}