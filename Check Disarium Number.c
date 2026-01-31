#include <stdio.h>
#include <math.h>

int main() {
    int n, temp, sum=0, r, pos=0;
    scanf("%d",&n);

    temp = n;
    while(temp>0) {
        pos++;
        temp/=10;
    }

    temp = n;
    while(temp>0) {
        r = temp%10;
        sum += pow(r, pos--);
        temp/=10;
    }

    if(sum == n)
        printf("Disarium Number");
    else
        printf("Not Disarium");

    return 0;
}
