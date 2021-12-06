#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    int number;
    char name[20];
} typedef student;

int main()
{
    student class[4] = {
        {.name = "LKV", .number = 1},
        {.name = "LKV1", .number = 2},
        {.name = "LKV2", .number = 3},
        {.name = "LKV3", .number = 4}
    };

    for(int i=0;i<4;i++){
        printf("the student name   = %s\n", class[i].name);
        printf("the student number = %d\n", class[i].number);
        printf("=======================\n");
    }
    

    system("pause");
    return 0;
}