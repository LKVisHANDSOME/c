#include <stdio.h>
#include <stdlib.h>

struct student {
    int id;
    int grade;
} typedef Student;

int main()
{
    Student class[10];
    for (int i = 0; i < 10; i++) {
        class[i].id = i;
        class[i].grade = i * 10;
    }
    for (int i = 0; i < 10; i++) {
        printf("student id %d's grade is %d\n", class[i].id, class[i].grade);
    }

    system("pause");
    return 0;
}