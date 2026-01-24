#include <stdio.h>

int main() {
    char s[100];
    int i;
    gets(s);

    for(i=0;s[i]!='\0';i++)
        if(s[i]!=' ')
            printf("%c",s[i]);

    return 0;
}
