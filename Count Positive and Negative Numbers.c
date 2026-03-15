#include <stdio.h>

int main() {
    int arr[100], n, i;
    int pos=0, neg=0;

    printf("Enter size: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    for(i=0;i<n;i++) {
        if(arr[i]>=0)
            pos++;
        else
            neg++;
    }

    printf("Positive = %d\nNegative = %d",pos,neg);

    return 0;
}