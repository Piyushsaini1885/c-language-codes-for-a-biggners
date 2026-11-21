#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, count=0, sum=0, rem;

    printf("Enter number: ");
    scanf("%d",&num);

    temp = num;

    while(temp!=0) {
        count++;
        temp/=10;
    }

    temp = num;

    while(temp!=0) {
        rem = temp%10;
        sum += pow(rem,count);
        temp/=10;
    }

    if(sum==num)
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}