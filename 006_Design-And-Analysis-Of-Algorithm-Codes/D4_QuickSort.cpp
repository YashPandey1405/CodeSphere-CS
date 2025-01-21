#include<iostream>
#include<chrono>
using namespace std::chrono;
using namespace std;

int Partition(int*,int,int);   
void PrintArray(int*,int);    

void QuickSort(int arr[],int Start,int End){  //O(nLogn).......
    if(Start>=End){  
        return;
    }
    int Pivot=Partition(arr,Start,End);
    QuickSort(arr,Start,Pivot-1);  
    QuickSort(arr,Pivot+1,End);

}

int Partition(int arr[],int Start,int End){
    int Pivot=arr[Start];
    int Count=0;
    for(int i = (Start+1) ; i <= End ; i++){
        if(arr[i] <= Pivot){  
            Count++;
        }
    } 
    int PivotIndex=Start+Count;
    int Temp=arr[PivotIndex];  
    arr[PivotIndex]=arr[Start];
    arr[Start]=Temp;
    int ptr1=Start , ptr2=End;
    while(ptr1<PivotIndex && ptr2>PivotIndex){
        while(arr[ptr1]<Pivot){    ptr1++;    }  
        while(arr[ptr2]>Pivot){    ptr2--;    }  
        if(ptr1<PivotIndex && ptr2>PivotIndex){
            int Temp=arr[ptr1];  
            arr[ptr1]=arr[ptr2];
            arr[ptr2]=Temp;
            ptr1++;  ptr2--;
        }
    }
    return PivotIndex;
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
    PrintArray(arr,50);
    auto start = high_resolution_clock::now();
    QuickSort(arr,0,49);
    cout<<"After QuickSort() Function , ";
    PrintArray(arr,50);
    auto end = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(end - start);
    cout << "Time taken by Quick Sort is " << (duration.count()/1000) <<"ms" << endl;
    return 0;
}