#include <stdio.h>

int main() {
    int a[5], i;
    int largest, second;

    for(i=0;i<5;i++)
        scanf("%d",&a[i]);

    largest = second = -9999;

    for(i=0;i<5;i++) {
        if(a[i] > largest) {
            second = largest;
            largest = a[i];
        }
        else if(a[i] > second && a[i] != largest) {
            second = a[i];
        }
    }

    printf("Second Largest = %d", second);
    return 0;
}
