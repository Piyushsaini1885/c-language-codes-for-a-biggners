#include <stdio.h>

int hash[10];

void insert(int key) {
    int index = key % 10;

    while(hash[index] != 0)
        index = (index + 1) % 10;

    hash[index] = key;
}

void display() {
    for(int i=0;i<10;i++)
        printf("%d ", hash[i]);
}

int main() {
    insert(10);
    insert(20);
    insert(15);
    display();
    return 0;
}