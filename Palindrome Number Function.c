#include <stdio.h>

int isPalindrome(int n) {
    int rev=0, temp=n;

    while(temp) {
        rev = rev*10 + temp%10;
        temp/=10;
    }

    return (rev==n);
}

int main() {
    int n;

    scanf("%d",&n);

    if(isPalindrome(n))
        printf("Palindrome Function");
    else
        printf("Not Palindrome function");

    return 0;
}