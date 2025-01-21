#include<iostream>
#include<chrono>
using namespace std::chrono;
using namespace std;

void PrintArray(int*,int); 

void InsersionSort(int arr[],int n){  //O(n^2)......
    for(int i=1 ; i < n ; i++){
        int Curr=arr[i];
        int prev=i-1;
        while(prev>=0 && arr[prev]>Curr){  
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=Curr;
    }
    cout<<"After Insersion Sort In Ascending Order --> ";
    PrintArray(arr,n);
}

void PrintArray(int arr[],int n){ 
    cout<<"THE SORTED ARRAY IS ::: { ";
    for(int i=0;i<n;i++){
        if(i==(n-1)){
            cout<<arr[i]<<" }"<<endl;
        }
        else{
            cout<<arr[i]<<", ";
        }
    }
    cout<<endl;
}

int main(){
    int arr[50]={93,36,29,23,30,47,100,58,21,87,79,95,71,11,81,48,59,32,39,26,97,20,38,44,55,72,41,91,69,96,16,27,5,19,18,65,46,22,98,14,6,88,9,99,80,83,64,89,53,73};
    cout<<endl;
    PrintArray(arr,50);
    auto start = high_resolution_clock::now();
    InsersionSort(arr,50);
    auto end = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(end - start);
    cout << "Time taken by Insersion Sort is " << (duration.count()/500)<<"ms" << endl;
    return 0;
}