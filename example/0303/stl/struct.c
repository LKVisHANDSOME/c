#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    int number;
    char name[20];
};

void initial(struct student *a, int n, const char *s)
{
    a->number = n;
    strcpy(a->name, s);
}

int main()
{
    struct student a;

    initial(&a, 10, "LKV");

    printf("the student name   = %s\n", a.name);
    printf("the student number = %d\n", a.number);

    system("pause");
    return 0;
}