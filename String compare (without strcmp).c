#include <stdio.h>

int main() {
    char a[50], b[50];
    int i = 0, flag = 0;

    gets(a);
    gets(b);

    while(a[i] != '\0' || b[i] != '\0') {
        if(a[i] != b[i]) {
            flag = 1;
            break;
        }
        i++;
    }

    if(flag == 0)
        printf("Equal");
    else
        printf("Not Equal");

    return 0;
}
