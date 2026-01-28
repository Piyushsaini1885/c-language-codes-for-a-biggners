#include <stdio.h>

int main() {
    char s[100];
    int i, u=0, l=0;

    fgets(s,100,stdin);

    for(i=0;s[i]!='\0';i++) {
        if(s[i]>='A' && s[i]<='Z') u++;
        else if(s[i]>='a' && s[i]<='z') l++;
    }

    printf("Upper=%d Lower=%d", u, l);
    return 0;
}
