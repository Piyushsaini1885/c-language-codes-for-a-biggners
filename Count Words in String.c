#include <stdio.h>

int main() {
    char str[100];
    int i, count = 1;

    printf("Enter sentence: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ')
            count++;
    }

    printf("Words = %d", count);

    return 0;
}