#include <stdio.h>

int main() {
    int num, binary[32], i = 0, j;

    printf("Enter number: ");
    scanf("%d", &num);

    while(num > 0) {
        binary[i++] = num % 2;
        num /= 2;
    }

    printf("Binary = ");
    for(j = i - 1; j >= 0; j--)
        printf("%d", binary[j]);

    return 0;
}