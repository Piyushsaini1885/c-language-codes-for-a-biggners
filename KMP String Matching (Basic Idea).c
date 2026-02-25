#include <stdio.h>
#include <string.h>

int main() {
    char text[100], pattern[50];
    int i, j, found=0;

    scanf("%s %s", text, pattern);

    for(i=0;text[i]!='\0';i++) {
        for(j=0;pattern[j]!='\0';j++) {
            if(text[i+j] != pattern[j])
                break;
        }
        if(pattern[j]=='\0') {
            found=1;
            break;
        }
    }

    if(found)
        printf("Pattern Found");
    else
        printf("Not Found");

    return 0;
}