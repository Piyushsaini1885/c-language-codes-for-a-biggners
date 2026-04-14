#include <stdio.h>

int main() {
    char str[100];
    int count[256]={0}, i;

    gets(str);

    for(i=0;str[i];i++)
        count[str[i]]++;

    for(i=0;str[i];i++) {
        if(count[str[i]]==1) {
            printf("First Non-Repeating=%c",str[i]);
            break;
        }
    }

    return 0;
}