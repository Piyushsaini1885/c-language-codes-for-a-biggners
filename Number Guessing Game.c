#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num, guess;

    srand(time(0));
    num = rand() % 100 + 1;

    do {
        printf("Guess number (1-100): ");
        scanf("%d",&guess);

        if(guess > num)
            printf("Too High\n");
        else if(guess < num)
            printf("Too Low\n");
        else
            printf("Correct!\n");

    } while(guess != num);

    return 0;
}