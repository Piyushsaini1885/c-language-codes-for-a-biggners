#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100];
    int i,j,flag=0;

    printf("Enter first string: ");
    gets(a);

    printf("Enter second string: ");
    gets(b);

    if(strlen(a)!=strlen(b)) {
        printf("Not Anagram");
        return 0;
    }

    for(i=0;a[i];i++) {
        flag=0;

        for(j=0;b[j];j++) {
            if(a[i]==b[j]) {
                flag=1;
                b[j]='*';
                break;
            }
        }

        if(!flag) {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram");

    return 0;
}