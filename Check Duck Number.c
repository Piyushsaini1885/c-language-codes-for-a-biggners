#include <stdio.h>

int main() {
    int n, flag=0;
    scanf("%d",&n);

    while(n>0) {
        if(n%10==0) {
            flag=1;
            break;
        }
        n/=10;
    }

    if(flag)
        printf("Duck Number");
    else
        printf("Not Duck");

    return 0;
}
