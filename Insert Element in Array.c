#include <stdio.h>

int main() {
    int a[10] = {1,2,3,4,5};
    int n=5, pos=2, value=99;

    for(int i=n;i>=pos;i--)
        a[i] = a[i-1];

    a[pos-1] = value;
    n++;

    for(int i=0;i<n;i++)
        printf("%d ", a[i]);

    return 0;
}
