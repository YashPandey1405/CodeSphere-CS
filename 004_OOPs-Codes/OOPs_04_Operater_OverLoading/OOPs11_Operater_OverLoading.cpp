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

        // Operator OverLoading Of Operater(+).......
        ComplexNum operator+(ComplexNum c){
            ComplexNum temp;
            temp.Real=Real+c.Real;
            temp.Imaginary=Imaginary+c.Imaginary;
            return temp;
        }

        // Operator OverLoading Of Operater(-).......
        ComplexNum operator-(ComplexNum c){
            ComplexNum temp;
            temp.Real=Real-c.Real;
            temp.Imaginary=Imaginary-c.Imaginary;
            return temp;
        }

        // Operator OverLoading Of Operater(*).......
        ComplexNum operator*(ComplexNum c){
            ComplexNum temp;
            temp.Real=(Real*c.Real) - (Imaginary*c.Imaginary);
            temp.Imaginary=(Real*c.Imaginary) + (Imaginary*c.Real);
            return temp;
        }
        
        // Operator OverLoading Of Operater(/).......
        void operator/(ComplexNum c1){
            int a=Real , b=Imaginary;
            int c=c1.Real , d=c1.Imaginary;
            float den=(c*c)+(d*d);
            float RealNum=(a*c)+(b*d);
            float ImagNum=(b*c)-(a*d);
            float RealPart=RealNum/den;
            float ImagPart=ImagNum/den;
            cout<<"AFTER OPERATOR(/) OVERLOADING , COMPLEX No ::: ("<<RealPart<<") + i("<<ImagPart<<")"<<endl;
        }

        void Display(){
            cout<<"COMPLEX No ::: ("<<Real<<") + i("<<Imaginary<<")"<<endl;
        }
};

int main(){
    ComplexNum c1(7,6) , c2(3,4);
    c1.Display();
    c2.Display();
    cout<<endl;

    ComplexNum c3=c1+c2;  //Call For c1.operator+(c2)........
    cout<<"AFTER OPERATOR(+) OVERLOADING , ";
    c3.Display();
    cout<<endl;
    
    ComplexNum c4=c1-c2;  //Call For c1.operator-(c2)........
    cout<<"AFTER OPERATOR(-) OVERLOADING , ";
    c4.Display();
    cout<<endl;

    ComplexNum c5=c1*c2;  //Call For c1.operator*(c2)........
    cout<<"AFTER OPERATOR(*) OVERLOADING , ";
    c5.Display();
    cout<<endl;
     
    c1/c2;  //Call For c1.operator/(c2)........
    c2/c1;  //Call For c2.operator/(c1)........
    return 0;
}