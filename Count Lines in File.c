#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int lines=0;

    fp = fopen("test.txt","r");

    while((ch=fgetc(fp))!=EOF) {
        if(ch=='\n')
            lines++;
    }

    printf("Lines=%d",lines+1);

    fclose(fp);

    return 0;
}