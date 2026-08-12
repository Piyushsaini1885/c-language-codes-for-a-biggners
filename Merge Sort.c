#include <stdio.h>

void merge(int a[], int l, int m, int r) {
    int i=l, j=m+1, k=0, temp[100];

    while(i<=m && j<=r) {
        if(a[i]<a[j])
            temp[k++]=a[i++];
        else
            temp[k++]=a[j++];
    }

    while(i<=m) temp[k++]=a[i++];
    while(j<=r) temp[k++]=a[j++];

    for(i=l, k=0; i<=r; i++, k++)
        a[i]=temp[k];
}

void mergesort(int a[], int l, int r) {
    if(l<r) {
        int m=(l+r)/2;
        mergesort(a,l,m);
        mergesort(a,m+1,r);
        merge(a,l,m,r);
    }
}