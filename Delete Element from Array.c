#include <stdio.h>

int main() {
    int a[10] = {1,2,3,4,5};
    int n=5, pos=3;

    for(int i=pos-1;i<n-1;i++)
        a[i] = a[i+1];

    n--;

    for(int i=0;i<n;i++)
        printf("%d ", a[i]);

    return 0;
}
