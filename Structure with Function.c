#include <stdio.h>

struct student {
    int id;
};

void display(struct student s) {
    printf("ID=%d", s.id);
}

int main() {
    struct student s1 = {101};
    display(s1);
}