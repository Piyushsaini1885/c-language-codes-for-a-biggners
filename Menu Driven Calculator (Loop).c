#include <stdio.h>

int main() {
    int ch,a,b;

    while(1) {
        printf("\n1.Add 2.Sub 3.Exit\n");
        scanf("%d",&ch);

        if(ch==3) break;

        scanf("%d%d",&a,&b);

        if(ch==1)
            printf("Sum=%d",a+b);
        else if(ch==2)
            printf("Sub=%d",a-b);
    }

    return 0;
}