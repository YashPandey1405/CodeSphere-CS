//write a program to read two numbers and then divide the first number by the second number and raise an exception if the second number is zero
#include<iostream>
using namespace std;

int main(){
    int Num1,Num2;
    cout<<"ENTER THE VALUE OF Num1 ::: ";
    cin>>Num1;
    cout<<"ENTER THE VALUE OF Num2 ::: ";
    cin>>Num2;
    try{
        if(Num2==0){
            throw(Num2);
        }
        else{
            cout<<"VALUE OF ("<<Num1<<"/"<<Num2<<") IS ::: "<<float(Num1/Num2)<<endl;
        }
    }
    catch(int Num2){
        cout<<"EXCEPTION CASE ::: VALUE OF Num2 IS "<<Num2<<" , THUS , CAN'T EVALUATE (Num1/Num2) i.e ("<<Num1<<"/"<<Num2<<")......."<<endl;
    }
    return 0;
}