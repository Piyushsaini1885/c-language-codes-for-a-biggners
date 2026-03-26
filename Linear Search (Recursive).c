#include <stdio.h>

int search(int arr[], int n, int key) {
    if(n<0)
        return -1;

    if(arr[n]==key)
        return n;

    return search(arr,n-1,key);
}

int main() {
    int arr[100], n, i, key, res;

    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    scanf("%d",&key);

    res = search(arr,n-1,key);

    if(res!=-1)
        printf("Found at %d", res+1);
    else
        printf("Not Found");

    return 0;
}