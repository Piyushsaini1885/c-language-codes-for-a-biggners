#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100];
    int i, j, found;

    printf("Enter first string: ");
    gets(a);

    printf("Enter second string: ");
    gets(b);

    if(strlen(a) != strlen(b)) {
        printf("Not Anagram");
        return 0;
    }

    for(i=0; a[i]; i++) {
        found = 0;

        for(j=0; b[j]; j++) {
            if(a[i] == b[j]) {
                found = 1;
                b[j] = '*';
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