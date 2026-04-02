#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char *start, *end, temp;

    gets(str);

    start = str;
    end = str + strlen(str) - 1;

    while(start < end) {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    printf("%s",str);

    return 0;
}