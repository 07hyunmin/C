#include <stdio.h>

int main(){
    int key = 0;
    int mom = 0;
    int bmi = 0;

    scanf("%d %d", &key, &mom);

    bmi = mom + 100 - key;

    printf("%d\n", bmi);

    if(bmi > 0){
        printf("Obesity\n");
        printf("Need control");
    }
    
    return 0;
}