#include <stdio.h>

int main() {
    char s[100];
    int i;
    fgets(s,100,stdin);

    for(i=0; s[i]!='\0'; i++)
        printf("%c\n", s[i]);

    return 0;
}
