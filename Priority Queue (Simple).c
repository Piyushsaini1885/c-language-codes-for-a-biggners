#include <stdio.h>

int pq[10], n=0;

void insert(int value) {
    int i = n-1;

    while(i>=0 && pq[i] > value) {
        pq[i+1] = pq[i];
        i--;
    }
    pq[i+1] = value;
    n++;
}

void display() {
    for(int i=0;i<n;i++)
        printf("%d ", pq[i]);
}

int main() {
    insert(30);
    insert(10);
    insert(20);
    display();
    return 0;
}