#include <stdio.h>

int main() {
    int a[10], n, count;

    scanf("%d",&n);

    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(int i=0;i<n;i++) {
        count=1;
        if(a[i]==-1) continue;

        for(int j=i+1;j<n;j++) {
            if(a[i]==a[j]) {
                count++;
                a[j]=-1;
            }
        }

        printf("%d occurs %d times\n", a[i], count);
    }

    return 0;
}
