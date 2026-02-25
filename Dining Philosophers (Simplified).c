#include <stdio.h>

int main() {
    int i;
    for(i=0;i<5;i++) {
        printf("Philosopher %d is Thinking\n", i);
        printf("Philosopher %d is Eating\n", i);
    }
    return 0;
}