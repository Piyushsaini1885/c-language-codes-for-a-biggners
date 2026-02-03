#include <stdio.h>

struct student {
    int roll;
    float marks;
};

int main() {
    struct student s[2];
    for(int i=0;i<2;i++)
        scanf("%d %f",&s[i].roll,&s[i].marks);

    for(int i=0;i<2;i++)
        printf("%d %.2f\n", s[i].roll, s[i].marks);

    return 0;
}
