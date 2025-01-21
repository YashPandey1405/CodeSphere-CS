// The Problem Based On Function Template Is : -
// Write a program to define the function template for swapping two items 
// of various data types such as Integer , Float & Character......

#include<iostream>
using namespace std;

template<class T>
void Swap(T &Val1 , T &Val2){
    T Temp=Val1;
    Val1=Val2;
    Val2=Temp;
}

int main(){
    int a=4,b=5;
    float c=4.3,d=5.8;
    char e='A',f='a';
    cout<<"BEFORE SWAP ::: a = "<<a<<" AND b = "<<b<<endl;
    cout<<"BEFORE SWAP ::: c = "<<c<<" AND d = "<<d<<endl;
    cout<<"BEFORE SWAP ::: e = '"<<e<<"' AND f = '"<<f<<"'"<<endl;
    Swap(a,b);  Swap(c,d);  Swap(e,f);
    cout<<endl;
    cout<<"AFTER SWAP ::: a = "<<a<<" AND b = "<<b<<endl;
    cout<<"AFTER SWAP ::: c = "<<c<<" AND d = "<<d<<endl;
    cout<<"AFTER SWAP ::: e = '"<<e<<"' AND f = '"<<f<<"'"<<endl;
    return 0;
}