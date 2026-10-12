#include <stdio.h>

int main() {
    char a[50], b[50];
    int i, count[256]={0};

    gets(a);
    gets(b);

    for(i=0;a[i]!='\0';i++)
        count[a[i]]++;

    for(i=0;b[i]!='\0';i++)
        count[b[i]]--;

    for(i=0;i<256;i++)
        if(count[i]!=0) {
            printf("Not Anagram");
            return 0;
        }

    printf("Anagram");
    return 0;
}
