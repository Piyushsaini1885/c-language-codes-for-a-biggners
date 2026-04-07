#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100];
    int count[256]={0}, i;

    gets(a);
    gets(b);

    if(strlen(a)!=strlen(b)) {
        printf("Not Anagram");
        return 0;
    }

    for(i=0;a[i];i++) {
        count[a[i]]++;
        count[b[i]]--;
    }

    for(i=0;i<256;i++) {
        if(count[i]!=0) {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram");

    return 0;
}