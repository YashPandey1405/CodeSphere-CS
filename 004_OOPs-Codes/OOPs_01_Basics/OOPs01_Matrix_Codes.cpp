#include<iostream>
using namespace std;

void Addition(int arr1[2][2],int arr2[2][2]){  //Function To Perform Add Operation.......
    int arr[2][2];
    cout<<"PERFORMING ADD OPERATION ON THE 2 MATRIX......."<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            arr[i][j]=arr1[i][j]+arr2[i][j];
            cout<<"THE VALUE AT arr["<<i<<"]["<<j<<"] IS ::: "<<arr[i][j]<<endl;
        }
    }
    cout<<endl;
}

void Subtract(int arr1[2][2],int arr2[2][2]){  //Function To Perform Subtract Operation.......
    int arr[2][2];
    cout<<"PERFORMING SUBTRACT OPERATION ON THE 2 MATRIX......."<<endl; 
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            arr[i][j]=arr1[i][j]-arr2[i][j];
            cout<<"THE VALUE AT arr["<<i<<"]["<<j<<"] IS ::: "<<arr[i][j]<<endl;
        }
    }
    cout<<endl;
}

void Multiply(int arr1[2][2],int arr2[2][2]){  //Function To Perform Multiply Operation.......
    int arr[2][2];
    cout<<"PERFORMING MULTIPLY OPERATION ON THE 2 MATRIX......."<<endl; 
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            arr[i][j]=0;
            for(int k=0;k<2;k++){
                arr[i][j] += (arr1[i][k]*arr2[k][j]);
            }
            cout<<"THE VALUE AT arr["<<i<<"]["<<j<<"] IS ::: "<<arr[i][j]<<endl;
        }
    }
    cout<<endl;
}

int main(){
    int arr1[2][2]={{1,2},{3,4}};
    int arr2[2][2]={{4,3},{2,1}};
    Addition(arr1,arr2);
    Subtract(arr1,arr2);
    Multiply(arr1,arr2);
	return 0;
}
