#include <stdio.h>

int binary(int arr[], int l, int r, int key) {
    if(l<=r) {
        int mid = (l+r)/2;

        if(arr[mid]==key)
            return mid;
        else if(arr[mid] > key)
            return binary(arr,l,mid-1,key);
        else
            return binary(arr,mid+1,r,key);
    }
    return -1;
}

int main() {
    int arr[100], n, i, key, res;

    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    scanf("%d",&key);

    res = binary(arr,0,n-1,key);

    if(res!=-1)
        printf("Found at %d", res+1);
    else
        printf("Not Found");

    return 0;
}