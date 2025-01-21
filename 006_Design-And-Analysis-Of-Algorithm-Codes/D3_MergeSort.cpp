#include<iostream>
#include<chrono>
using namespace std::chrono;
using namespace std;

void Merge(int*,int,int,int); 
void PrintArray(int*,int);    

void MergeSort(int arr[],int Start,int End){  
    if(Start>=End){    
        return;
    }
    int Mid=(End+Start)/2; 
    MergeSort(arr,Start,Mid);  
    MergeSort(arr,Mid+1,End);  
    Merge(arr,Start,Mid,End);
}

void Merge(int arr[],int Start,int Mid,int End){
    int Temp[End-Start+1]={0}; 
    int ptr1=Start;  
    int ptr2=Mid+1;  
    int ptr=0;
    while(ptr1<=Mid && ptr2<=End){
        if(arr[ptr1] <= arr[ptr2]){ 
            Temp[ptr++] = arr[ptr1++];
        }
        else {
            Temp[ptr++] = arr[ptr2++];
        }
    }

    while(ptr1<=Mid){ 
        Temp[ptr++] = arr[ptr1++];
    }

    while(ptr2<=End){  
        Temp[ptr++] = arr[ptr2++];
    }
    int idx=Start;
    for(int i =0 ; i < (End-Start+1) ; i++ ){
        arr[idx]=Temp[i];
        idx++;
    }
}

void PrintArray(int arr[],int n){
    cout<<"THE ARRAY IS ::: { ";
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
    MergeSort(arr,0,49);
    cout<<"After Merge Sort , ";
    PrintArray(arr,50);
    auto end = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(end - start);
    cout << "Time taken by Merge Sort is " << (duration.count()/1000) <<"ms" << endl;
    return 0;
}