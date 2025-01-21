//Write a program to raise an exception if any attempt is made to refer to an element whose index is beyond the array size
#include<iostream>
using namespace std;

int main(){
    int arr[6]={10,20,30,40,50,60};
    int size=sizeof(arr)/sizeof(int);
    cout<<endl;
    try{
        int idx;
        cout<<"ENTER THE INDEX OF ARRAY FOR RANDOM ACCESS ::: ";
        cin>>idx;
        if(idx>=0 && idx<size){
            cout<<"VALUE AT arr["<<idx<<"] IS ::: "<<arr[idx]<<endl;
        }
        else{
            throw(idx);
        }
    }
    catch(int idx){
        cout<<"EXCEPTION CASE ::: INDEX "<<idx<<" IS BEYOND THE ARRAY SIZE......"<<endl;
    }
    cout<<endl;
    return 0;
}