#include <stdio.h>

int main() {
    char str[100];
    int i, digit=0, alpha=0, special=0;

    printf("Enter string: ");
    gets(str);

    for(i=0; str[i]!='\0'; i++) {
        if(str[i]>='0' && str[i]<='9')
            digit++;
        else if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
            alpha++;
        else
            special++;
    }

    printf("Digits=%d Alphabets=%d Special=%d", digit, alpha, special);

    return 0;
}