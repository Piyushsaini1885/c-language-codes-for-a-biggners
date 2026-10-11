#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];
    int i, j, flag=1;

    scanf("%s %s", s1, s2);

    if(strlen(s1)!=strlen(s2)) {
        printf("Not Anagram");
        return 0;
    }

    for(i=0;s1[i]!='\0';i++) {
        flag=0;
        for(j=0;s2[j]!='\0';j++) {
            if(s1[i]==s2[j]) {
                flag=1;
                s2[j]='*';
                break;
            }
        }
        if(flag==0) break;
    }

    if(flag) printf("Anagram");
    else printf("Not Anagram");

    return 0;
}
