#include <stdio.h>

int main(){
    int a = 0;
    int sco = 0;
    int sum = 0;
    double avg = 0;
    scanf("%d\n", &a);
    for(int i = 0; i < a; i++){
        scanf("%d ", &sco);
        sum += sco;
    }
    avg = (double)sum / a;
    printf("avg : %.1f\n", avg);
    if(avg >= 80){
        printf("pass");
    }else{
        printf("fail");
    }
    return 0;
}