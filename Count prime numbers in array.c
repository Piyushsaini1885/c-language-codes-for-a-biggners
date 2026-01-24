#include <stdio.h>

int main() {
    int a[50], n, i, j, count=0, flag;
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n;i++) {
        flag=0;
        for(j=2;j<=a[i]/2;j++)
            if(a[i]%j==0) {
                flag=1;
                break;
            }
        if(flag==0 && a[i]>1)
            count++;
    }

    printf("Prime Count = %d", count);
    return 0;
}
