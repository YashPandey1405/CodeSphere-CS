#include<iostream>
#include<string.h>
using namespace std;

class Student{
    private:
        string Name;
        int RollNo;
        int Age;
    public:
        void GetData1(string name,int rollno,int age){
            this->Name=name;
            this->RollNo=rollno;
            this->Age=age;
        }
        void Display1(){
            cout<<"Roll NO OF '"<<Name<<"' IS ::: "<<RollNo<<endl;
            cout<<"AGE OF '"<<Name<<"' IS ::: "<<Age<<" Years"<<endl;
            cout<<endl;
        }
        string GetName(){  return Name;  }
};

class MainSub : virtual public Student{  //'Virtual' --> To Avoid Copy Of Data Of Parent Class In Hybrid Inheritance......
    private:
        int Marks_MainSub[5]={0};
        int Total_MainSub=0;
    public:
        void GetData2(int m0,int m1,int m2,int m3,int m4){
            this->Marks_MainSub[0]=m0;
            this->Marks_MainSub[1]=m1;
            this->Marks_MainSub[2]=m2;
            this->Marks_MainSub[3]=m3;
            this->Marks_MainSub[4]=m4;
            Total_MainSub += (m0+m1+m2+m3+m4);
        }
        void Display2(){
            cout<<"TOTAL Marks OF '"<<GetName()<<"' IN MAIN 5 SUBJECTS IS ::: "<<Total_MainSub<<endl;
            cout<<"PERCENTAGE OF Marks OF '"<<GetName()<<"' IN MAIN 5 SUBJECTS IS ::: "<<(Total_MainSub/5.0)<<endl;
            cout<<endl;
        }
        int GetMarks_MainSub(){  return Total_MainSub;  }
};

class ExtraSub : virtual public Student{  //'Virtual' --> To Avoid Copy Of Data Of Parent Class In Hybrid Inheritance......
    private:
        int Marks_ExtraSub[2]={0};
        int Total_ExtraSub=0;
    public:
        void GetData3(int e0,int e1){
            this->Marks_ExtraSub[0]=e0;
            this->Marks_ExtraSub[1]=e1;
            Total_ExtraSub += (e0+e1);
        }
        void Display3(){
            cout<<"TOTAL Marks OF '"<<GetName()<<"' IN EXTRA 2 SUBJECTS IS ::: "<<Total_ExtraSub<<endl;
            cout<<"PERCENTAGE OF Marks OF '"<<GetName()<<"' IN EXTRA 2 SUBJECTS IS ::: "<<(Total_ExtraSub/2.0)<<endl;
            cout<<endl;
        }
        int GetMarks_ExtraSub(){  return Total_ExtraSub;  }
};

class Result : public MainSub , public ExtraSub {
    private:
        int TotalMarks;
    public:
        void GetData4(){
            TotalMarks = GetMarks_MainSub() + GetMarks_ExtraSub();
        }
        void Display4(){
            cout<<"OVERALL MARKS OF '"<<GetName()<<"' IN ALL 7 SUBJECTS IS ::: "<<(TotalMarks)<<endl;
            cout<<"OVERALL PERCENTAGE OF '"<<GetName()<<"' IS ::: "<<(TotalMarks/7.0)<<endl;
            cout<<endl;
        }
};

int main(){
    cout<<endl;
    Result res;

    // Statements To Run GetData Function Of All Four Classes.....
    res.GetData1("Yash Pandey",122,20);
    res.GetData2(98,95,96,97,96);
    res.GetData3(94,93);
    res.GetData4();

    // Statements To Run Display Function Of All Four Classes.....
    res.Display1();
    res.Display2();
    res.Display3();
    res.Display4();

    return 0;
}