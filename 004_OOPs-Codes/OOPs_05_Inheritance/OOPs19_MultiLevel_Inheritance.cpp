#include<iostream>
#include<string.h>
using namespace std;

class Student{
    private:
        int Roll_No;
        string Name;
    public:
        void GetData1(int num,string name){
            this->Roll_No=num;
            this->Name=name;
        }
        void Display1(){
            cout<<"Roll Number Of '"<<Name<<"' IS ::: "<<Roll_No<<endl;
        }
};

class Exam : public Student{
    private:
        int Marks[6];
        int TotalMarks=0;
    public:
        void GetData2(int n,int n1,int n2,int n3,int n4,int n5){
            this->Marks[0]=n;
            this->Marks[1]=n1;
            this->Marks[2]=n2;
            this->Marks[3]=n3;
            this->Marks[4]=n4;
            this->Marks[5]=n5;
            TotalMarks += (n+n1+n2+n3+n4+n5);
        }
        int Total(){  return TotalMarks;  }
};

class Result : public Exam{
    private:
        float TotalMarks=0;
    public:
        void GetData3(){
            TotalMarks=Total();
        }
        void Display3(){
            cout<<"PERCENTAGE IN 6 SUBJECTS IS ::: "<<(TotalMarks/6)<<"%"<<endl;
        }
};

int main(){
    cout<<endl;
    Result res;
    res.GetData1(122,"Yash Pandey");
    res.GetData2(89,90,93,96,91,93);
    res.GetData3();
    res.Display1();
    res.Display3();
    cout<<endl;
    cout<<endl;
    return 0;
}