#include <stdio.h>

struct Student {
    char name[20];
    int id;
    float gradePoints;
};

int main()
{
    struct Student student1 = {"Choi", 202644077, 3.8};

    student1.id = 202644066;

    printf("%s ", student1.name);
    printf("%d ", student1.id);
    printf("%.1f", student1.gradePoints);

    return 0;
}

//코드 실행 결과로 올바른 것은?
//1. Choi 202644066 202644066
//2. Choi 202644077 202644066
//3. Choi 202644077 3.8
//4. Choi 202644066 3.8

//4