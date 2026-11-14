#include <stdio.h>
#include <string.h>

int main()
{
    char str[10] = "World";

    strcpy(str, "World");

    printf("%s ", str);
    printf("%d", (int)strlen(str));

    return 0;
}

//출력 결과로 올바른 것은?
//1. World 5
//2. World 6
//3. World 10
//4. World 11

//1