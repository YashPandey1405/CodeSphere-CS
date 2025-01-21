#include<iostream>
using namespace std;

class SecondNum; //Forward Declaration Of Class 'SecondNum'......
class ThirdNum; //Forward Declaration Of Class 'ThirdNum'......

class FirstNum{
    private:
        int Num1;
    public:
        FirstNum(int a){
            this->Num1=a;
        }
        friend void Compare(FirstNum,SecondNum,ThirdNum);
};

class SecondNum{
    private:
        int Num2;
    public:
        SecondNum(int b){
            this->Num2=b;
        }
        friend void Compare(FirstNum,SecondNum,ThirdNum);
};

class ThirdNum{
    private:
        int Num3;
    public:
        ThirdNum(int c){
            this->Num3=c;
        }
        friend void Compare(FirstNum,SecondNum,ThirdNum);
};

void Compare(FirstNum n1,SecondNum n2,ThirdNum n3){
    int Num1=n1.Num1;
    int Num2=n2.Num2;
    int Num3=n3.Num3;
    int ans= (Num1>Num2) ? ((Num1>Num3) ? Num1 : Num3) : ((Num2>Num3) ? Num2 : Num3); 
    cout<<"THE GREATEST VALUE BETWEEN THE VALUES "<<Num1<<" , "<<Num2<<" & "<<Num3<<" IS ::: "<<ans<<endl; 
}

int main(){
    cout<<endl;
    FirstNum n1(3);
    SecondNum n2(7);
    ThirdNum n3(5);
    Compare(n1,n2,n3); 
    cout<<endl;
    cout<<endl;
    return 0;
}