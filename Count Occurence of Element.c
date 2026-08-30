#include <stdio.h>

int main() {
    int arr[100], n, key, i, count=0;

    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    scanf("%d",&key);

    for(i=0;i<n;i++) {
        if(arr[i]==key)
            count++;
    }

    printf("Count=%d",count);

    return 0;
}