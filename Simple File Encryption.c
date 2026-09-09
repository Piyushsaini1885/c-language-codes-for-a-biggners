#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    fp = fopen("data.txt","r+");

    while((ch=fgetc(fp))!=EOF) {
        fseek(fp,-1,1);
        fputc(ch+1,fp); // simple encryption
        fseek(fp,0,1);
    }

    fclose(fp);

    return 0;
}