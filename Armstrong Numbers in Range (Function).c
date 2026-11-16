#include <stdio.h>

int isArmstrong(int n) {
    int temp=n, sum=0, rem;

    while(temp) {
        rem = temp%10;
        sum += rem*rem*rem;
        temp/=10;
    }
    return sum==n;
}

int main() {
    int a,b,i;

    scanf("%d%d",&a,&b);

    for(i=a;i<=b;i++) {
        if(isArmstrong(i))
            printf("%d ",i);
    }

    return 0;
}