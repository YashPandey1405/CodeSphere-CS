#include<iostream>
using namespace std;

class ComplexNum{
    private:
        int Real;
        int Imaginary;
    public:
        ComplexNum(){}
        ComplexNum(int r,int i){
            this->Real=r;
            this->Imaginary=i;
        }

        friend ComplexNum operator+(ComplexNum,ComplexNum);

        friend ComplexNum operator-(ComplexNum,ComplexNum);

        friend ComplexNum operator*(ComplexNum,ComplexNum);
        
        friend void operator/(ComplexNum,ComplexNum);

        void Display(){
            cout<<"COMPLEX No ::: ("<<Real<<") + i("<<Imaginary<<")"<<endl;
        }
};

// Operator OverLoading Of Operater(+) Using Friend Function.......
ComplexNum operator+(ComplexNum c1,ComplexNum c2){
    ComplexNum temp;
    temp.Real=c1.Real+c2.Real;
    temp.Imaginary=c1.Imaginary+c2.Imaginary;
    return temp;
}

// Operator OverLoading Of Operater(-) Using Friend Function.......
ComplexNum operator-(ComplexNum c1,ComplexNum c2){
    ComplexNum temp;
    temp.Real=c1.Real-c2.Real;
    temp.Imaginary=c1.Imaginary-c2.Imaginary;
    return temp;
}
// Operator OverLoading Of Operater(*) Using Friend Function.......
ComplexNum operator*(ComplexNum c1,ComplexNum c2){
    ComplexNum temp;
    temp.Real=(c1.Real*c2.Real) - (c1.Imaginary*c2.Imaginary);
    temp.Imaginary=(c1.Real*c2.Imaginary) + (c1.Imaginary*c2.Real);
    return temp;
}

// Operator OverLoading Of Operater(/) Using Friend Function.......
void operator/(ComplexNum c1,ComplexNum c2){
    int a=c1.Real , b=c1.Imaginary;
    int c=c2.Real , d=c2.Imaginary;
    float den=(c*c)+(d*d);
    float RealNum=(a*c)+(b*d);
    float ImagNum=(b*c)-(a*d);
    float RealPart=RealNum/den;
    float ImagPart=ImagNum/den;
    cout<<"AFTER OPERATOR(/) OVERLOADING , COMPLEX No ::: ("<<RealPart<<") + i("<<ImagPart<<")"<<endl;
}

int main(){
    ComplexNum c1(7,6) , c2(3,4);
    c1.Display();
    c2.Display();
    cout<<endl;

    ComplexNum c3=c1+c2;  //Call For operator+(c1,c2)........
    cout<<"AFTER OPERATOR(+) OVERLOADING , ";
    c3.Display();
    cout<<endl;
    
    ComplexNum c4=c1-c2;  //Call For operator-(c1,c2)........
    cout<<"AFTER OPERATOR(-) OVERLOADING , ";
    c4.Display();
    cout<<endl;

    ComplexNum c5=c1*c2;  //Call For operator*(c1,c2)........
    cout<<"AFTER OPERATOR(*) OVERLOADING , ";
    c5.Display();
    cout<<endl;
     
    c1/c2;  //Call For operator/(c1,c2)........
    c2/c1;  //Call For operator/(c2,c1)........
    return 0;
}