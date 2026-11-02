#include <stdio.h>

int main() {
    int a;
    int num = 1;
    char aa = 'A';
    scanf("%d", &a);

    for (int i = 1; i <= a; i++) {
        for (int j = 0; j < a - i + 1; j++) {
            printf("%d ", num++);
        }
        for (int j = 0; j < i; j++) {
            printf("%c ", aa++);
        }
        printf("\n");
    }

    return 0;
}