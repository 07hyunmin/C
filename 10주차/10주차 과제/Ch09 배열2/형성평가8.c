#include <stdio.h>

int main() {
    int a[10][10] = {0};
    int b;
    scanf("%d", &b);
    for (int i = 0; i < b; i++) {
        a[i][0] = 1;
        for (int j = 1; j <= i; j++) {
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
        }
    }
    for (int i = b - 1; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}