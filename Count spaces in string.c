#include <stdio.h>

int main() {
    char s[100];
    int i, count=0;

    fgets(s,100,stdin);

    for(i=0;s[i]!='\0';i++)
        if(s[i]==' ')
            count++;

    printf("Spaces = %d", count);
    return 0;
}
