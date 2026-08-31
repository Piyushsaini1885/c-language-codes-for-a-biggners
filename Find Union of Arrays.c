#include <stdio.h>

int main() {
    int a[50], b[50], c[100];
    int n1,n2,i,j,k=0,flag;

    scanf("%d",&n1);
    for(i=0;i<n1;i++) scanf("%d",&a[i]);

    scanf("%d",&n2);
    for(i=0;i<n2;i++) scanf("%d",&b[i]);

    for(i=0;i<n1;i++)
        c[k++]=a[i];

    for(i=0;i<n2;i++) {
        flag=0;
        for(j=0;j<n1;j++) {
            if(b[i]==a[j]) {
                flag=1;
                break;
            }
        }
        if(!flag)
            c[k++]=b[i];
    }

    for(i=0;i<k;i++)
        printf("%d ",c[i]);

    return 0;
}