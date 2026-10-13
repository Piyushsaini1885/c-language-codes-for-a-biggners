#include <stdio.h>

int main() {
    int n, sq, temp;
    scanf("%d", &n);

    sq = n * n;
    temp = n;

    while(n != 0) {
        if(n % 10 != sq % 10) {
            printf("Not Automorphic");
            return 0;
        }
        n /= 10;
        sq /= 10;
    }

    printf("Automorphic Number");
    return 0;
}
