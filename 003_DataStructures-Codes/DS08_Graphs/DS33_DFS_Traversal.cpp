#include<bits/stdc++.h>
using namespace std;
#define V 5

void DFS_Traversal(int Graph[V][V] , int curr , bool Visited[V]){
    cout<<curr<<" ";
    Visited[curr]=true;
    for(int i=0 ; i < V ; i++){
        if(Graph[curr][i] != 0){       
            if(Visited[i] != true){
                DFS_Traversal(Graph, i, Visited);
            } 
        }
    }
}

int main(){
    int Graph[V][V]={{0,1,0,1,0},{1,0,1,1,1},{0,1,0,0,1},{1,1,0,0,1},{0,1,1,1,0}};
    bool Visited[V] = {false};  // Boolean Visited Array....
    cout<<"THE DFS TRAVERSAL OF THE GRAPH IS ::: ";
    DFS_Traversal(Graph,0,Visited);
    return 0;
}