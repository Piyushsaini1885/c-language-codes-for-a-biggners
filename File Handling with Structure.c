#include <stdio.h>

struct student {
    int id;
    char name[50];
};

int main() {
    struct student s;
    FILE *fp;

    fp = fopen("student.txt","w");

    printf("Enter ID and Name: ");
    scanf("%d %s",&s.id, s.name);

    fprintf(fp,"%d %s", s.id, s.name);
    fclose(fp);

    printf("Data written to file");
    return 0;
}