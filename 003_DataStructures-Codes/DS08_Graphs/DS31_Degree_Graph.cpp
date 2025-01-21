#include<iostream>
using namespace std;
#define V 4

int main(){
    int Graph[V][V]={{0,1,1,0},{1,0,1,1},{1,1,0,1},{0,0,1,0}};
    int InDegree[V]={0} , OutDegree[V]={0};
    for(int i=0;i<V;i++){
        for(int j=0;j<V;j++){
            if(Graph[i][j]!=0){
                OutDegree[i]++;  InDegree[j]++;
            }
        }
    }
    for(int i=0;i<V;i++){
        cout<<"For Node-("<<i<<")  :::  InDegree = "<<InDegree[i]<<" And OutDegree = "<<OutDegree[i]<<endl; 
    }
    return 0;
}