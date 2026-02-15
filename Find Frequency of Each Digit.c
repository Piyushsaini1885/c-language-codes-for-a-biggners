#include <stdio.h>

int main() {
    int n, digit, freq[10]={0};

    scanf("%d",&n);

    while(n>0) {
        digit = n%10;
        freq[digit]++;
        n/=10;
    }

    for(int i=0;i<10;i++)
        if(freq[i]!=0)
            printf("%d occurs %d times\n", i, freq[i]);

    return 0;
}
