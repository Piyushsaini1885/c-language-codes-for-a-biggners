#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100];
    int i, j, len1, len2, found;

    printf("Enter first string: ");
    gets(a);
    printf("Enter second string: ");
    gets(b);

    len1 = strlen(a);
    len2 = strlen(b);

    if(len1 != len2) {
        printf("Not Anagram");
        return 0;
    }

    for(i = 0; i < len1; i++) {
        found = 0;
        for(j = 0; j < len2; j++) {
            if(a[i] == b[j]) {
                found = 1;
                b[j] = '#';
                break;
            }
        }
        if(!found) {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram");
    return 0;
}