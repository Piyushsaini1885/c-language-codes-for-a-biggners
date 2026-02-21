#include <stdio.h>

int visited[10];

void dfs(int graph[10][10], int n, int v) {
    printf("%d ", v);
    visited[v]=1;

    for(int i=0;i<n;i++) {
        if(graph[v][i]==1 && visited[i]==0)
            dfs(graph, n, i);
    }
}

int main() {
    int graph[10][10], n;

    scanf("%d",&n);

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&graph[i][j]);

    dfs(graph, n, 0);
    return 0;
}