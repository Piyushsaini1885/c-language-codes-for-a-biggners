#include <stdio.h>

int main() {
    int a,b,choice;

    printf("1.Add 2.Sub 3.Mul 4.Div\n");
    scanf("%d",&choice);

    scanf("%d%d",&a,&b);

    switch(choice) {
        case 1: printf("Sum=%d",a+b); break;
        case 2: printf("Sub=%d",a-b); break;
        case 3: printf("Mul=%d",a*b); break;
        case 4: printf("Div=%d",a/b); break;
        default: printf("Invalid");
    }

    return 0;
}