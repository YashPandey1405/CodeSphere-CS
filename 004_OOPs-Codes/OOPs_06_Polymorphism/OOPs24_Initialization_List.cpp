/*
-> An initializer list is a comma-separated list of values that are used to initialize the data members of a class.
-> The initializer list is enclosed in curly braces and is preceded by a colon (:) in the constructor declaration.
-> Order Of Exicution Of Constructor Will Be Same As Order Of Declaration Of Inheritance Of Class.
-> Order Of Exicution Of Constructor Is Independent Of Order Of Initialization List.
-> Order Of Exicution Of Constructor Depends On Statement(1) Not Statement(2).
*/

#include<iostream>
using namespace std;

class Alpha{
    private:
        int Num1;
    public:
        Alpha(int Num1){
            cout<<"CONSTRUCTOR OF CLASS ALPHA IS CALLED......"<<endl;
            this->Num1=Num1;
        }
        void Display_Alpha(){
            cout<<"VALUE OF DATA MEMBER OF CLASS ALPHA IS ::: "<<Num1<<endl;
        }
};

class Betta{
    private:
        int Num2;
    public:
        Betta(int Num2){
            cout<<"CONSTRUCTOR OF CLASS BETTA IS CALLED......"<<endl;
            this->Num2=Num2;
        }
        void Display_Betta(){
            cout<<"VALUE OF DATA MEMBER OF CLASS BETTA IS ::: "<<Num2<<endl;
        }
};

class Gamma : public Betta , public Alpha{  //-->(1).....
    private:
        int Num3;
    public:
        Gamma(int Num1,int Num2,int Num3) : Alpha(Num1) , Betta(Num2){  //-->(2).....
            cout<<"CONSTRUCTOR OF CLASS GAMMA IS CALLED......"<<endl;
            this->Num3=Num3;
            cout<<endl;
        }
        void Display_Gamma(){
            cout<<"VALUE OF DATA MEMBER OF CLASS GAMMA IS ::: "<<Num3<<endl;
        }
};

int main(){
    Gamma g(10,20,30);
    g.Display_Alpha();
    g.Display_Betta();
    g.Display_Gamma();
    return 0;
}