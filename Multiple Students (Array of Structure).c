#include <stdio.h>

struct student {
    int id;
    char name[50];
};

int main() {
    struct student s[3];
    int i;

    for(i=0;i<3;i++) {
        scanf("%d %s",&s[i].id,s[i].name);
    }

    for(i=0;i<3;i++) {
        printf("%d %s\n",s[i].id,s[i].name);
    }

    return 0;
}