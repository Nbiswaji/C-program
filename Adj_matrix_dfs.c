#include<stdio.h>
#include<stdlib.h>
#define MAX_VERTICES 100
int adj_matrix[MAX_VERTICES][MAX_VERTICES];
int visited[MAX_VERTICES];
int num_vertices;
void dfs(int start_vertex)
{
    int i;
    visited[start_vertex] = 1;
    printf("%d ", start_vertex);
    for(i=0;i<num_vertices;i++)
    {
        if(adj_matrix[start_vertex][i] == 1 && visited[i] == 0)
        {
            dfs(i);
        }
    }
}
int main()
{
    int i,j,start_vertex;
    printf("Enter the number of vertices: ");
    scanf("%d",&num_vertices);
    printf("Enter the adjacency matrix:\n");
    for(i=0;i<num_vertices;i++)
    {
        for(j=0;j<num_vertices;j++)
        {
            scanf("%d",&adj_matrix[i][j]);
        }
    }
    printf("Enter the starting vertex for DFS: ");
    scanf("%d", &start_vertex);
    printf("DFS Traversal: ");
    for (i = 0; i < num_vertices; i++)
    {
        visited[i] = 0;
    }
    dfs(start_vertex);
    return 0;
}