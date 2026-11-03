#include <stdio.h>

int main() {
    char s[100];
    int i=0;
    gets(s);

    while(s[i]!='\0')
        i++;

    printf("Characters = %d", i);
    return 0;
}
