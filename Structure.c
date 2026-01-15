#include <stdio.h>

struct student {
    int roll;
    char name[20];
};

int main() {
    struct student s;
    scanf("%d", &s.roll);
    scanf("%s", s.name);

    printf("Roll=%d Name=%s", s.roll, s.name);
    return 0;
}
