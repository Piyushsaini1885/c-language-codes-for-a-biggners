#include <stdio.h>

int main() {
    int num;

    scanf("%d",&num);

    if(num>0 && (num & (num-1))==0)
        printf("Power of 2");
    else
        printf("Not Power of 2");

    return 0;
}