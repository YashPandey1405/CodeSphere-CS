#include<iostream>
#include<string.h>
using namespace std;

class First{
    private:
        int Book_No;
        string Book_Name;
    public:
        void GetData1(int num,string name){
            this->Book_No=num;
            this->Book_Name=name;
        }
        void Display1(){
            cout<<"BOOK NUMBER IS ::: "<<Book_No<<" And BOOK NAME IS ::: "<<Book_Name<<endl;
        }
};

class Second{
    private:
        string Author_Name;
        string Publishor_Name;
    public:
        void GetData2(string author,string pub){
            this->Author_Name=author;
            this->Publishor_Name=pub;
        }
        void Display2(){
            cout<<"AUTHOR NAME IS ::: '"<<Author_Name<<"' And PUBLISHOR NAME IS ::: "<<Publishor_Name<<endl;
        }
};

class Third : public First , public Second{
    private:
        int Pages;
        int Year_Of_Pub;
    public:
        void GetData3(int num1,int num2){
            this->Pages=num1;
            this->Year_Of_Pub=num2;
        }
        void Display3(){
            cout<<"NUMBER OF PAGES ARE ::: "<<Pages<<" And YEAR OF PUBLICATION IS ::: "<<Year_Of_Pub<<endl;
        }
};

int main(){
    cout<<endl;
    Third obj[2];
    obj[0].GetData1(101,"OOPs Using C++");
    obj[0].GetData2("E Balaguruswamy","McGraw Hill");
    obj[0].GetData3(700,2010);
    obj[0].Display1();
    obj[0].Display2();
    obj[0].Display3();
    cout<<endl;
    obj[1].GetData1(102,"Data Structures In C");
    obj[1].GetData2("Schawm","McGraw Hill");
    obj[1].GetData3(800,2008);
    obj[1].Display1();
    obj[1].Display2();
    obj[1].Display3();
    cout<<endl;
    return 0;
}