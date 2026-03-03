#include <stdio.h>

int main() {
    char a[100], b[100];
    int i = 0, flag = 0;

    printf("Enter first string: ");
    gets(a);
    printf("Enter second string: ");
    gets(b);

    while(a[i] != '\0' || b[i] != '\0') {
        if(a[i] != b[i]) {
            flag = 1;
            break;
        }
        i++;
    }

    if(flag == 0)
        printf("Strings are equal");
    else
        printf("Not equal");

    return 0;
}