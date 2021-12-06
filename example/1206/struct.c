#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student{
    int number;
    char name[20];
};

int main() {
    struct student a;

    a.number = 10;
    strcpy(a.name,"LKV");

    printf("the student name   = %s\n",a.name);
    printf("the student number = %d\n",a.number);
    
    system("pause");
    return 0;
}