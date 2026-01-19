#include <stdio.h>

int main() {
    int n, sum = 0, temp;
    scanf("%d", &n);

    temp = n;
    while(n != 0) {
        sum += n % 10;
        n /= 10;
    }

    if(temp % sum == 0)
        printf("Harshad Number");
    else
        printf("Not Harshad");

    return 0;
}
