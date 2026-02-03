#include <stdio.h>

enum day {SUN, MON, TUE, WED, THU, FRI, SAT};

int main() {
    enum day d = FRI;
    printf("%d", d);
    return 0;
}
