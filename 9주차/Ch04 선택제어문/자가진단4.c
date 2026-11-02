#include <stdio.h>

int main(){
    int a = 0;
    scanf("%d", &a);
    switch (a / 10)
    {
    case 9:
        printf("Excellent");
        break;
    case 8:
        printf("Good");
        break;
    case 7:
        printf("Pass");
        break;
    default:
        printf("Fail");
        break;
    }
    return 0;
}