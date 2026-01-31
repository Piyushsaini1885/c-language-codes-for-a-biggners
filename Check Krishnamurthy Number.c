#include <stdio.h>

int fact(int n) {
    int i, f=1;
    for(i=1;i<=n;i++)
        f*=i;
    return f;
}

int main() {
    int n, temp, sum=0;
    scanf("%d",&n);

    temp=n;
    while(temp>0) {
        sum += fact(temp%10);
        temp/=10;
    }

    if(sum==n)
        printf("Krishnamurthy Number");
    else
        printf("Not Krishnamurthy");

    return 0;
}
