#include <stdio.h>

int main() {
    char s[100];
    int i;

    fgets(s,100,stdin);

    for(i=0;s[i]!='\0';i++) {
        if(s[i]==' ')
            s[i]='_';
    }

    printf("%s", s);
    return 0;
}
