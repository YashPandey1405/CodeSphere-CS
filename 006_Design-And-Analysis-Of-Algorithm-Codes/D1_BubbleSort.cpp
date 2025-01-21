#include<iostream>
#include<chrono>
using namespace std::chrono;
using namespace std;

void PrintArray(int*,int); 

void BubbleSort(int arr[],int n){  //O(n^2)......
    for(int i=0 ; i < n ; i++){
        int flag=1;
        for(int j=0 ; j<(n-1-i) ; j++){
            if(arr[j]>arr[j+1]){  
                int Temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=Temp;
                flag++;
            }
        }
        if(flag==1){  break;  }
    }
    cout<<"After Bubble Sort In Ascending Order --> ";
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
    BubbleSort(arr,50);
    auto end = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(end - start);
    cout << "Time taken by Bubble Sort is " << (duration.count() /1000)<<"ms" << endl;
    return 0;
}