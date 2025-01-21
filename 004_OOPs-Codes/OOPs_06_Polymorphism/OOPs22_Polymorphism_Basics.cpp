#include<iostream>
using namespace std;

class Base{
    public:
        int Var_Base;
        void Display(){
            cout<<"USING BASE CLASS Display() Function........"<<endl;
            cout<<"BASE CLASS VARIABLE IS ::: "<<Var_Base<<endl;
            cout<<endl;
        }
};

class Derived : public Base{
    public:
        int Var_Derived;
        void Display(){
            cout<<"USING Derived CLASS Display() Function........"<<endl;
            cout<<"BASE CLASS VARIABLE IS ::: "<<Var_Base<<endl;
            cout<<"DERIVED CLASS VARIABLE IS ::: "<<Var_Derived<<endl;
            cout<<endl;
        }
};

int main(){
    Base obj1;
    Base* Base_ptr;
    Derived obj2;
    Derived* Derived_ptr;
    cout<<endl;

    // CASE-I --> Base Class Pointer To Derived Class Object -> This Will Run Base Class Function......
    // Base_ptr=&obj2;
    // Base_ptr->Var_Base=100;
    // Base_ptr->Display();

    // CASE-II --> Base Class Pointer To Base Class Object -> This Will Run Base Class Function......
    // Base_ptr=&obj1;
    // Base_ptr->Var_Base=100;
    // Base_ptr->Display();

    // CASE-III --> Derived Class Pointer To Base Class Object -> This Will Run With Virtual Function......
    
    // CASE-IV --> Derived Class Pointer To Derived Class Object -> This Will Run Derived Class Function......
    // Derived_ptr=&obj2;
    // Derived_ptr->Var_Base=100;
    // Derived_ptr->Var_Derived=200;
    // Derived_ptr->Display();

    return 0;
}