#include <stdio.h>

int main() {
    int n, flag=1;
    scanf("%d",&n);

    while(n>0) {
        if(n%10 != 0 && n%10 != 1) {
            flag=0;
            break;
        }
        n/=10;
    }

    if(flag) printf("Binary Number");
    else printf("Not Binary");

    return 0;
}
