#include <stdio.h>

char stack[100];
int top=-1;

void push(char c) { stack[++top]=c; }
char pop() { return stack[top--]; }

int main() {
    char exp[100];
    int i, flag=1;

    scanf("%s", exp);

    for(i=0; exp[i]!='\0'; i++) {
        if(exp[i]=='(')
            push(exp[i]);
        else if(exp[i]==')') {
            if(top==-1) {
                flag=0;
                break;
            }
            pop();
        }
    }

    if(top!=-1) flag=0;

    if(flag) printf("Balanced");
    else printf("Not Balanced");

    return 0;
}