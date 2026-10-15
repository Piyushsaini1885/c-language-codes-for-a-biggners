#include <stdio.h>

int main() {
    int a[5], i, flag=0;

    for(i=0;i<5;i++)
        scanf("%d",&a[i]);

    for(i=0;i<5/2;i++) {
        if(a[i]!=a[4-i]) {
            flag=1;
            break;
        }
    }

    if(flag==0)
        printf("Palindrome Array");
    else
        printf("Not Palindrome");

    return 0;
}
