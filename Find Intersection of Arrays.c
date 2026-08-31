#include <stdio.h>

int main() {
    int a[50], b[50], n1,n2,i,j;

    scanf("%d",&n1);
    for(i=0;i<n1;i++) scanf("%d",&a[i]);

    scanf("%d",&n2);
    for(i=0;i<n2;i++) scanf("%d",&b[i]);

    for(i=0;i<n1;i++) {
        for(j=0;j<n2;j++) {
            if(a[i]==b[j])
                printf("%d ",a[i]);
        }
    }

    return 0;
} 

