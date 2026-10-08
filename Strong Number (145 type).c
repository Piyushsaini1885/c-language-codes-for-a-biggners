#include <stdio.h>

int fact(int n) {
    int f=1;
    for(int i=1;i<=n;i++)
        f*=i;
    return f;
}

int main() {
    int n, temp, sum=0, r;
    scanf("%d",&n);

    temp = n;
    while(temp!=0) {
        r = temp%10;
        sum += fact(r);
        temp/=10;
    }

    if(sum==n) printf("Strong Number");
    else printf("Not Strong");

    return 0;
}
