#include <stdio.h>

int fact(int n) {
    int f=1,i;
    for(i=1;i<=n;i++) f*=i;
    return f;
}

int main() {
    int i,a,b,temp,sum,rem;

    scanf("%d%d",&a,&b);

    for(i=a;i<=b;i++) {
        temp=i; sum=0;

        while(temp) {
            rem=temp%10;
            sum += fact(rem);
            temp/=10;
        }

        if(sum==i)
            printf("%d ",i);
    }

    return 0;
}