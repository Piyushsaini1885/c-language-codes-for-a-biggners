#include <stdio.h>

int main() {
    int a[50], n, i, max, smax;
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    max = smax = a[0];

    for(i=1;i<n;i++) {
        if(a[i] > max) {
            smax = max;
            max = a[i];
        }
        else if(a[i] > smax && a[i] != max)
            smax = a[i];
    }

    printf("Second Largest = %d", smax);
    return 0;
}
