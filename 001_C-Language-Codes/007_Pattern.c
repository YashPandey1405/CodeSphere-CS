#include<stdio.h>

int main(){
    for(int i=0;i<5;i++){
        for(int j=0;j<(4-i);j++){
            printf("  ");
        }
        char ch='A';
        for(int j=0;j<((2*i)+1);j++){
            printf("%c ",ch);
            ch=((int)ch)+1;
        }
        printf("\n");
    }
    int n=4;
    for(int i=1;i<=4;i++){
        for(int j=1;j<=i;j++){
            printf("  ");
        }
        char ch='A';
        for(int j=0;j<((2*(n-i))+1);j++){
            printf("%c ",ch);
            ch=((int)ch)+1;
        }
        printf("\n");
    }
    return 0;
}