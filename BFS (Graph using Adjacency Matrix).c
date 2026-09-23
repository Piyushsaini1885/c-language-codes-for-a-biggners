#include <stdio.h>

int queue[10], front=-1, rear=-1;
int visited[10];

void enqueue(int v) {
    if(rear==9) return;
    if(front==-1) front=0;
    queue[++rear]=v;
}

int dequeue() {
    return queue[front++];
}

void bfs(int graph[10][10], int n, int start) {
    enqueue(start);
    visited[start]=1;

    while(front<=rear) {
        int v = dequeue();
        printf("%d ", v);

        for(int i=0;i<n;i++) {
            if(graph[v][i]==1 && visited[i]==0) {
                enqueue(i);
                visited[i]=1;
            }
        }
    }
}

int main() {
    int graph[10][10], n;

    scanf("%d",&n);

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&graph[i][j]);

    bfs(graph, n, 0);
    return 0;
}