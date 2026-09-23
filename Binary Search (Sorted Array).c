#include <stdio.h>

int main() {
    int a[10], n, key;
    int low=0, high, mid, found=0;

    scanf("%d",&n);

    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    scanf("%d",&key);

    high = n-1;

    while(low<=high) {
        mid = (low+high)/2;

        if(a[mid]==key) {
            found=1;
            break;
        }
        else if(a[mid]<key)
            low = mid+1;
        else
            high = mid-1;
    }

    if(found)
        printf("Found at position %d", mid+1);
    else
        printf("Not Found");

    return 0;
}
