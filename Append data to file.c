#include <stdio.h>

int main() {
    FILE *fp;
    fp = fopen("data.txt","a");
    fprintf(fp,"\nWelcome to C");
    fclose(fp);
    return 0;
}
