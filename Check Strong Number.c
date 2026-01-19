#include <stdio.h>

int main() {
    int n, temp, r, sum = 0, i, fact;
    scanf("%d", &n);

    temp = n;
    while(n != 0) {
        r = n % 10;
        fact = 1;
        for(i = 1; i <= r; i++)
            fact *= i;
        sum += fact;
        n /= 10;
    }

    if(temp == sum)
        printf("Strong Number");
    else
        printf("Not Strong");

    return 0;
}
