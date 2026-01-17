#include <stdio.h>

int main() {
    char a[50], b[50];
    int i = 0;

    gets(a);

    while(a[i] != '\0') {
        b[i] = a[i];
        i++;
    }
    b[i] = '\0';

    printf("Copied string: %s", b);
    return 0;
}
