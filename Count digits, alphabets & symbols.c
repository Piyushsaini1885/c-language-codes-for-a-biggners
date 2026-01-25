#include <stdio.h>

int main() {
    char s[100];
    int i, d=0, a=0, sp=0;

    fgets(s,100,stdin);

    for(i=0;s[i]!='\0';i++) {
        if(s[i]>='0' && s[i]<='9') d++;
        else if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')) a++;
        else if(s[i]!=' ' && s[i]!='\n') sp++;
    }

    printf("Digits=%d Alphabets=%d Symbols=%d", d, a, sp);
    return 0;
}
