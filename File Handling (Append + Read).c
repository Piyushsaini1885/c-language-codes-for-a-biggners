#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    fp = fopen("demo.txt","a");
    fprintf(fp,"Hello\n");
    fclose(fp);

    fp = fopen("demo.txt","r");

    while((ch=fgetc(fp))!=EOF)
        printf("%c",ch);

    fclose(fp);

    return 0;
}