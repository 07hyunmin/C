#include <stdio.h>

union Data {
    int i;
    float f;
    char ch;
};

int main() {
    union Data data;

    data.i = 20;
    data.f = 6,5;

    printf("%.1f ", data.f);

    return 0;
}

//코드 실행결과로 올바른 것은?
//1. 6.5
//2. 20
//3. 6.0
//4. 6

//3