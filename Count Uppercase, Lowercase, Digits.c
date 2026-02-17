#include <stdio.h>

int main() {
    char s[100];
    int i, upper=0, lower=0, digit=0;

    fgets(s,100,stdin);

    for(i=0;s[i]!='\0';i++) {
        if(s[i]>='A' && s[i]<='Z')
            upper++;
        else if(s[i]>='a' && s[i]<='z')
            lower++;
        else if(s[i]>='0' && s[i]<='9')
            digit++;
    }

    printf("Uppercase=%d\nLowercase=%d\nDigits=%d", upper, lower, digit);

    return 0;
}
