#include<bits/stdc++.h>
using namespace std;
#define V 5

void BFS_Traversal(int Graph[V][V]){
    queue<int> q;    // Create An Inbuild Queue To Perform BFS Traversal......
    bool Visited[V] = {false};  // Boolean Visited Array....

    q.push(0);   // Enqueue Source Vertex to the Queue...........

    while(q.empty() != true){
        int curr=q.front();    
        q.pop();      
        if(Visited[curr] != true){
            cout<<curr<<" ";
            Visited[curr]=true;
            for(int i=0;i<V;i++){
                if(Graph[curr][i] != 0){        q.push(i);      }
            }
        }
    }
}

int main(){
    int Graph[V][V]={{0,1,0,1,0},{1,0,1,1,1},{0,1,0,0,1},{1,1,0,0,1},{0,1,1,1,0}};
    cout<<"THE BFS TRAVERSAL OF THE GRAPH IS ::: ";
    BFS_Traversal(Graph);
    return 0;
}