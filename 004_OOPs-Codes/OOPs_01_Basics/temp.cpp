#include<iostream>
using namespace std;

static int Count=0;

class Complex{
    private:
        int Real;
        int Imaginary;
    public:
        Complex(){}
        Complex(int a,int b){
            this->Real=a;
            this->Imaginary=b;
            Count++;
        }
        Complex(Complex& obj){
            this->Real=obj.Real;
            this->Imaginary=obj.Imaginary;
            Count++;
        }
        friend Complex Creation(Complex&,Complex&);
        void Show(){
            cout<<"THE COMPLEX NUMBER IS ::: ("<<Real<<")+i("<<Imaginary<<")"<<endl;
        }
        ~Complex(){
            cout<<"DESTRUCTOR CALLED FOR THE OBJECT IS CALLED && Count = "<<Count<<endl;
            Count--;
        }
};

Complex Creation(Complex& obj1,Complex& obj2){
    Complex Obj;
    Obj.Real=obj1.Real+obj2.Real;
    Obj.Imaginary=obj1.Imaginary+obj2.Imaginary;
    Count++;
    return Obj;
}

int main(){
    Complex c1(2,3) , c2(4,5) , c3;
    c3=Creation(c1,c2);
    c1.Show();
    c2.Show();
    c3.Show();
    return 0;
}