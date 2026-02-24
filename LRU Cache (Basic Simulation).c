#include <stdio.h>

int main() {
    int frames[3] = {-1,-1,-1};
    int pages[10], n, i, j, k, found, pos=0;

    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&pages[i]);

    for(i=0;i<n;i++) {
        found = 0;

        for(j=0;j<3;j++) {
            if(frames[j] == pages[i]) {
                found = 1;
                break;
            }
        }

        if(!found) {
            frames[pos] = pages[i];
            pos = (pos + 1) % 3;
        }

        for(k=0;k<3;k++)
            printf("%d ", frames[k]);
        printf("\n");
    }

    return 0;
}