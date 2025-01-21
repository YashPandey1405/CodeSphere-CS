#include<iostream>
using namespace std;
# define INF 1000
# define V 4

void FloydWarshall(int Graph[V][V]){
    int Dist[V][V];
    for (int i = 0; i < V; i++) {  // Loop To Set The Distance Array......
        for (int j = 0; j < V; j++) {
            Dist[i][j] = Graph[i][j];
        }
    }
    for (int k = 0; k < V; k++) {
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                if (Dist[i][k] + Dist[k][j] < Dist[i][j]) {
                    Dist[i][j] = Dist[i][k] + Dist[k][j];
                }
            }
        }
    }
    for (int i = 0; i < V; i++) {  // Loops To Print The OUTPUT.......
        cout<<"FOR VERTEX-"<<i<<" OF THE GRAPH -> (Row="<<i<<")--> ";
        for (int j = 0; j < V; j++) {
            if (Dist[i][j] == INF) {    cout<<"INF ";   } 
            else {      cout<<" "<<Dist[i][j]<<"  ";    }
        }
        cout<<endl;
    }
}

int main(){
    int Graph[V][V] = { { 0, 5, INF, 10 }, { INF, 0, 3, INF },{ INF, INF, 0, 1 }, { INF, INF, INF, 0 } };
    FloydWarshall(Graph);
    return 0;
}