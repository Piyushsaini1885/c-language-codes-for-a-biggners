#include <stdio.h>
int main() {
    char str[] = "Hello";
    int vowels = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            vowels++;
    }
    printf("Vowels: %d\n", vowels);
    return 0;
}
