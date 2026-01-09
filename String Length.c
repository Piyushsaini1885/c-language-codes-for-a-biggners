#include <stdio.h>
int main() {
    char str[100];
    printf("Enter string: ");
    gets(str);
    int len = 0;
    while (str[len] != '\0')
        len++;
    printf("Length: %d\n", len);
    return 0;
}
