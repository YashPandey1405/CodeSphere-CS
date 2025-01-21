#include<iostream>
using namespace std;

template<class T>
T Square(T n){
    return n*n;
}

int main(){
    cout<<Square(10)<<endl;
    cout<<Square(float(10.20))<<endl;
    cout<<Square(double(10.20))<<endl;
    return 0;
}