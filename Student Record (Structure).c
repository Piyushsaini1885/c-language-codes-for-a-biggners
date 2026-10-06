#include <stdio.h>

struct student {
    int id;
    char name[50];
    float marks;
};

int main() {
    struct student s;

    printf("Enter ID Name Marks: ");
    scanf("%d %s %f", &s.id, s.name, &s.marks);

    printf("ID=%d Name=%s Marks=%.2f", s.id, s.name, s.marks);

    return 0;
}