#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    int number;
    char name[20];
} typedef student;

int main()
{
    student a;
    student *b = &a;

    b->number = 10;
    strcpy(b->name, "LKV");

    printf("the student name   = %s\n", b->name);
    printf("the student number = %d\n", b->number);

    system("pause");
    return 0;
}