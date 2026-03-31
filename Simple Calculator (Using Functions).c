#include <stdio.h>

int add(int a,int b){ return a+b; }
int sub(int a,int b){ return a-b; }
int mul(int a,int b){ return a*b; }

int main() {
    int a,b;

    scanf("%d%d",&a,&b);

    printf("Add=%d\n",add(a,b));
    printf("Sub=%d\n",sub(a,b));
    printf("Mul=%d\n",mul(a,b));

    return 0;
}