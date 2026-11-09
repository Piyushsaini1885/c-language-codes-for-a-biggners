#include <stdio.h>
#include <string.h>

int main() {
    char str[100], sub[50];

    gets(str);
    gets(sub);

    if(strstr(str,sub))
        printf("Substring Found");
    else
        printf("Not Found");

    return 0;
}