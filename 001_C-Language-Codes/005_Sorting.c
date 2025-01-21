#include<stdio.h>

void BubbleSort(int arr[],int n){ //Time Complexity Of Bubble Sort Is O(n^2)....
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

void InsersionSort(int arr[],int n){ //Time Complexity Of Insersion Sort Is O(n^2)....
    for(int i=1;i<n;i++){
        int curr=arr[i];
        int prev=i-1;
        while(prev>=0 && arr[prev]>curr){
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=curr;
    }
}

void SelectionSort(int arr[],int n){ //Time Complexity Of Selection Sort Is O(n^2)....
    for(int i=0;i<(n-1);i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }
        if(i!=min){
            int temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
    }
}

void print(int arr[],int n){ //Function To Print The Sorted Array.....
    printf("SORTED ARRAY IS ::: {");
    for(int i=0;i<n;i++){
        if(i==(n-1)){
            printf("%d}",arr[i]);
        }
        else{
            printf("%d,",arr[i]);
        }
    }
}

int main(){
    int i=1;
    if(i){
        int arr[7]={1,4,6,8,2,3,7};
        BubbleSort(arr,7);
        print(arr,7);
        printf(" ---> Due To ---> Bubble Sort\n");
    }
    if(i){
        int arr[7]={1,4,6,8,2,3,7};
        InsersionSort(arr,7);
        print(arr,7);
        printf(" ---> Due To ---> Insersion Sort\n");
    }
    if(i){
        int arr[7]={1,4,6,8,2,3,7};
        SelectionSort(arr,7);
        print(arr,7);
        printf(" ---> Due To ---> Selection Sort\n");
    }
    // BubbleSort(arr,7);
    // SelectionSort(arr,7);
    // InsersionSort(arr,7);
}