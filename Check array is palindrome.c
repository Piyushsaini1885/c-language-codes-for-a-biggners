#include <stdio.h>

int main() {
    int a[50], n, i, flag=0;
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n/2;i++) {
        if(a[i]!=a[n-i-1]) {
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
