#include <stdio.h>
#include <string.h>

int main() {
    char str[3][100];
    int i, j;

    for(i=0;i<3;i++)
        scanf("%s", str[i]);

    for(j=0;str[0][j]!='\0';j++) {
        for(i=1;i<3;i++) {
            if(str[i][j] != str[0][j]) {
                printf("Prefix ends here");
                return 0;
            }
        }
        printf("%c", str[0][j]);
    }

    return 0;
}