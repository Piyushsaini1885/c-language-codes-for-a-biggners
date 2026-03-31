#include <stdio.h>

struct student {
    int id;
    char name[20];
};

int main() {
    struct student s;
    FILE *fp;

    fp = fopen("data.txt","r");

    fread(&s,sizeof(s),1,fp);

    printf("%d %s", s.id, s.name);

    fclose(fp);

    return 0;
}