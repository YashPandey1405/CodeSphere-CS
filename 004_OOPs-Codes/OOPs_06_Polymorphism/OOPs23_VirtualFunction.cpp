#include<iostream>
using namespace std;

class Shape{
    public:
        int Dim1 , Dim2;
        void GetData(){
            cout<<"ENTER THE VALUE OF VARIABLE Dim1 ::: ";
            cin>>Dim1;
            cout<<"ENTER THE VALUE OF VARIABLE Dim2 ::: ";
            cin>>Dim2;
            cout<<endl;
        }
        virtual void Display(){
            cout<<"AREA OF FIGURE IS ::: "<<(Dim1*Dim2)<<endl;
        }
};

class Triangle : public Shape{
    public:
        void Display(){
            cout<<"USING Display() Function Of Class Triangle......"<<endl;
            cout<<"THE AREA OF TRIANGLE IS ::: "<<(0.5*Dim1*Dim2)<<endl;
        }
};

class Rectangle : public Shape{
    public:
        void Display(){
            cout<<"USING Display() Function Of Class Rectangle......"<<endl;
            cout<<"THE AREA OF RECTANGLE IS ::: "<<(Dim1*Dim2)<<endl;
        }
};

int main(){
    cout<<endl;
    Shape* Base_ptr;
    int Select;
    cout<<"ENTER '1' FOR Triangle Or '2' FOR Rectangle ::: ";
    cin>>Select;
    if(Select==1){
        Base_ptr=new Triangle;
        Base_ptr->GetData();
        Base_ptr->Display();
    }
    else if(Select==2){
        Base_ptr=new Rectangle;
        Base_ptr->GetData();
        Base_ptr->Display();
    }
    else{
        cout<<"ENTERED WRONG SELECTION......."<<endl;
    }
    cout<<endl;
    return 0;
}
