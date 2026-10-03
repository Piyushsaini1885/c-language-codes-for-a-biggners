#include <stdio.h>
#include <string.h>

int main() {
    char user[20], pass[20];

    printf("Enter username: ");
    scanf("%s", user);

    printf("Enter password: ");
    scanf("%s", pass);

    if(strcmp(user,"admin")==0 && strcmp(pass,"1234")==0)
        printf("Login Successful");
    else
        printf("Invalid Login");

    return 0;
}