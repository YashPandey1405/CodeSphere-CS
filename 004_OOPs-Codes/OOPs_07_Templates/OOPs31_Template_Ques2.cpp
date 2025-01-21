// The Problem Based On Function Template Is : -
// Write a program to define the function template for calculating 
// the square of given numbers with different data types

#include<iostream>
using namespace std;

template<class T>
void Square(T Val){
    T sq = (Val*Val);
    cout<<"SQUARE OF VALUE "<<Val<<" IS ::: "<<sq<<endl;
}

int main(){
    Square(int(25));
    Square(long(16));
    Square(float(6.73));
    Square(double(7.8942));
    return 0;
}