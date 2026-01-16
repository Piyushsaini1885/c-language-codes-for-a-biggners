#include <stdio.h>

int main() {
    FILE *fp;
    fp = fopen("data.txt", "w");

    fprintf(fp, "Hello C Programming");
    fclose(fp);

    return 0;
}
