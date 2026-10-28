#include <stdio.h>

int main() {
    char s[100];
    fgets(s,100,stdin);

    if(s[0]=='\n')
        printf("Empty String");
    else
        printf("Not Empty");

    return 0;
}
