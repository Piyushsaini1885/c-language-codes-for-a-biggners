#include <stdio.h>

int main() {
    int arr[100], n, i, key, j;

    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    scanf("%d",&key);

    for(i=0;i<n;i++) {
        if(arr[i]==key) {
            for(j=i;j<n-1;j++)
                arr[j]=arr[j+1];
            n--;
            i--;
        }
    }

    for(i=0;i<n;i++)
        printf("%d ",arr[i]);

    return 0;
}