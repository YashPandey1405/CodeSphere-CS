// The Problem Based On Template Class Is : -
// Write a program to demonstrate the overloading of template Functions. 

#include<iostream>
using namespace std;

template<class T>
void Display(T Val){
    cout<<"Template Display ::: The Value Of Formal Parameter IS ::: "<<Val<<endl;
}
void Display(int Val){  // This Fn Will Run When DataType Of Val=Integer......
    cout<<"Explicit Display(int) ::: The Value Of Formal Parameter IS ::: "<<Val<<endl;
}
void Display(char Val){  // This Fn Will Run When DataType Of Val=Character......
    cout<<"Explicit Display(char) ::: The Value Of Formal Parameter IS ::: "<<Val<<endl;
}

int main(){
    Display(int(5));
    Display(float(7.396));
    Display(double(4.29845));
    Display('A');
    Display("Yash Pandey");
    return 0;
}