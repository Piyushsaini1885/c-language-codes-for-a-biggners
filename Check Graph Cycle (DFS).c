#include <stdio.h>

int visited[10];

int dfs(int graph[10][10], int v, int parent, int n) {
    visited[v]=1;

    for(int i=0;i<n;i++) {
        if(graph[v][i]) {
            if(!visited[i]) {
                if(dfs(graph,i,v,n))
                    return 1;
            }
            else if(i != parent)
                return 1;
        }
    }
    return 0;
}

int main() {
    int graph[10][10], n;

    scanf("%d",&n);

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&graph[i][j]);

    if(dfs(graph,0,-1,n))
        printf("Cycle Detected");
    else
        printf("No Cycle");

    return 0;
}