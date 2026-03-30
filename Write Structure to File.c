#include <stdio.h>

struct student {
    int id;
    char name[20];
};

int main() {
    struct student s = {1,"Piyush"};
    FILE *fp;

    fp = fopen("data.txt","w");

    fwrite(&s,sizeof(s),1,fp);

    fclose(fp);

    return 0;
}