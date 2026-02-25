#include <stdio.h>

int main() {
    int n, tq, time=0, remain;
    int bt[10], rt[10];

    scanf("%d",&n);

    for(int i=0;i<n;i++) {
        scanf("%d",&bt[i]);
        rt[i]=bt[i];
    }

    scanf("%d",&tq);

    remain = n;

    while(remain>0) {
        for(int i=0;i<n;i++) {
            if(rt[i]>0) {
                if(rt[i] <= tq) {
                    time += rt[i];
                    rt[i]=0;
                    remain--;
                } else {
                    rt[i] -= tq;
                    time += tq;
                }
            }
        }
    }

    printf("Total Time = %d", time);
    return 0;
}