#include <stdio.h>

int max(int a, int b) {
    if(a>b)
        return a;
    else
        return b;
}

int main() {
    int x,y;

    printf("Enter two numbers: ");
    scanf("%d %d",&x,&y);

    printf("Maximum = %d", max(x,y));

    return 0;
}