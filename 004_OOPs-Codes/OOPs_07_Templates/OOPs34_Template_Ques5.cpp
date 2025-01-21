// The Problem Based On Template Class Is : -
// Write a program to illustrate how to define & declare a class template for reading 2 Data Items
// from the Keyboard And To Find Thier Sum......

#include<iostream>
using namespace std;

template<class T1 , class T2>
class Addition{
    private:
        T1 Num1;
        T2 Num2;
    public:
        Addition(T1 Num1 , T2 Num2){
            this->Num1=Num1;
            this->Num2=Num2;
        }
        ~Addition(){
            cout<<"OBJECT WITH DATA MEMBER "<<Num1<<" & "<<Num2<<" IS DESTROYED...."<<endl;
        }
        void Show_Sum(){
            cout<<"SUM OF "<<Num1<<" AND "<<Num2<<" IS ::: "<<(Num1+Num2)<<endl;
        }
};

int main(){
    int a=4;
    float b=6.38;
    Addition<int,float> obj(a,b);
    obj.Show_Sum();
    return 0;
}