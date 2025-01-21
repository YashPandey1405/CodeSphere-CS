#include<iostream>
using namespace std;

class Overload{
    public:
        int Num;
        void operator++(){
            this->Num++;
        }
        void Display(){
            cout<<"THE VALUE IS ::: "<<Num<<endl;
        }
};

int main(){
    cout<<endl;
    Overload obj;
    obj.Num=10;
    obj.Display();
    ++obj;
    obj.Display();
    cout<<endl;
    cout<<endl;
    return 0;
}