#include<stdio.h>

void ReverseArray(int arr[],int start,int end){ //Function To Reverse The Array.....
	while(start < end){
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}	

void print(int arr[],int n){ //Function To Print The Reversed Array.....
    printf("ARRAY IS ::: {");
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
	int arr[9]={1,2,3,4,5,6,7,8,9};
	print(arr,9);
	ReverseArray(arr,0,8);
    printf("\nAFTER ReverseArray() Function ::: ");
	print(arr,9);
	return 0;
}
