// The Problem Based On Template Class Is : -
// Write a program to demonstrate the use of special functions, constructor and destructor in the class template. 
// The program is used to find the bigger of two entered numbers.

#include<iostream>
using namespace std;

template<class T>
class Greater{
    private:
        T Num1 , Num2;
    public:
        Greater(T Num1,T Num2){  // Parameterized Constructor Of Class Greater.......
            this->Num1=Num1;
            this->Num2=Num2;
        }
        ~Greater(){  // Destructor Of Class Greater.......
            cout<<"OBJECT WITH DATA MEMBER "<<Num1<<" & "<<Num2<<" IS DESTROYED...."<<endl;
        }
        T Compare(){
            return ((Num1>=Num2) ? Num1 : Num2) ;
        }
};

int main(){
    cout<<endl;
    int a=5,b=4;
    float c=3.7,d=8.3;

    Greater<int> Integer(a,b);
    Greater<float> Float(c,d);

    cout<<"GREATER VALUE Between "<<a<<" & "<<b<<" IS ::: "<<Integer.Compare()<<endl;
    cout<<"GREATER VALUE Between "<<c<<" & "<<d<<" IS ::: "<<Float.Compare()<<endl;
    cout<<endl;
    return 0;
}