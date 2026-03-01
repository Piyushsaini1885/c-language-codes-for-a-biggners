#include <stdio.h>

struct student {
    int roll;
    char name[50];
};

int main() {
    struct student s;

    printf("Enter roll and name: ");
    scanf("%d %s", &s.roll, s.name);

    printf("Roll: %d Name: %s", s.roll, s.name);

    return 0;
}