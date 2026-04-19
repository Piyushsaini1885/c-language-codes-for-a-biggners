#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i;

    printf("Enter sentence: ");
    gets(str);

    for(i=strlen(str)-1;i>=0;i--)
        printf("%c",str[i]);

    return 0;
}