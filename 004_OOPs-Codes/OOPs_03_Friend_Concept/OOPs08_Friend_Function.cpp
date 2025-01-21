#include<iostream>
using namespace std;

class SecondNum; //Forward Declaration Of Class 'SecondNum'......

class FirstNum{
    private:
        int Num1;
    public:
        FirstNum(int a){
            this->Num1=a;
        }
        friend void Compare(FirstNum,SecondNum);
};

class SecondNum{
    private:
        int Num2;
    public:
        SecondNum(int b){
            this->Num2=b;
        }
        friend void Compare(FirstNum,SecondNum);
};

void Compare(FirstNum n1,SecondNum n2){
    int Num1=n1.Num1;
    int Num2=n2.Num2;
    if(Num1>=Num2){
        cout<<"VALUE "<<Num1<<" IS GREATER THAN VALUE "<<Num2<<endl;
    }
    else{
        cout<<"VALUE "<<Num2<<" IS GREATER THAN VALUE "<<Num1<<endl;
    }
}

int main(){
    FirstNum n1(3);
    SecondNum n2(5);
    Compare(n1,n2); 
    return 0;
}