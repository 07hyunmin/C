#include <stdio.h>

struct Student {
    int id;
    int score;
};

int main()
{
    struct Student student1 = {44077, 62};
    struct Student *p = &student1;

    ___________ = 87;

    printf("%d", student1.score);

    return 0;
}

//빈칸에 들어갈 코드로 올바른 것은?
//실행 결과는 ==> 87
//1. p.score
//2. (*p).score
//3. *p -> score
//4. student1 -> score 

//2