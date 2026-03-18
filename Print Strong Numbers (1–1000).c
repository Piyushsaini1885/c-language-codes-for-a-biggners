#include <stdio.h>

int main() {
    int num,temp,rem,i,fact,sum;

    for(num=1; num<=1000; num++) {

        temp=num;
        sum=0;

        while(temp!=0) {
            rem=temp%10;
            fact=1;

            for(i=1;i<=rem;i++)
                fact*=i;

            sum+=fact;
            temp/=10;
        }

        if(sum==num)
            printf("%d ",num);
    }

    return 0;
}