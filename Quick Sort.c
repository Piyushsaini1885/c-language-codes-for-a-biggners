#include <stdio.h>

void quicksort(int a[], int low, int high) {
    int i=low, j=high, pivot=a[(low+high)/2], temp;

    while(i<=j) {
        while(a[i]<pivot) i++;
        while(a[j]>pivot) j--;

        if(i<=j) {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            i++; j--;
        }
    }

    if(low<j) quicksort(a, low, j);
    if(i<high) quicksort(a, i, high);
}

int main() {
    int a[5];

    for(int i=0;i<5;i++)
        scanf("%d",&a[i]);

    quicksort(a, 0, 4);

    for(int i=0;i<5;i++)
        printf("%d ", a[i]);

    return 0;
}