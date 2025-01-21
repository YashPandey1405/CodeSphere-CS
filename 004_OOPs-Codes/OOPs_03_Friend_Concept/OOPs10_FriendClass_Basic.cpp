#include<iostream>
using namespace std;

class Display; //Forward Declaration Of Class 'Display'......

class SetNum{
    private:
        int Num1,Num2;
    public:
        SetNum(int a,int b){
            this->Num1=a;
            this->Num2=b;
        }
        friend class Display;
};

class Display{
    private:
        int sum;
    public:
        Display(SetNum& n){
            sum=n.Num1+n.Num2;
            cout<<"THE 1st NUMBER IS ::: "<<n.Num1<<endl;
            cout<<"THE 2st NUMBER IS ::: "<<n.Num2<<endl;
            cout<<"SUM OF "<<n.Num1<<" AND "<<n.Num2<<" IS ::: "<<sum<<endl;
        }
};

int main(){
    cout<<endl;
    SetNum n(3,7);
    Display disp(n);
    cout<<endl;  
    cout<<endl;  
    return 0;
}