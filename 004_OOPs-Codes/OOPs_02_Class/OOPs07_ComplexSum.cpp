#include<iostream>
using namespace std;
 
class ComplexNo{
    private:
        int RealPart;
        int ImPart;
    public:
        ComplexNo(){}
        ComplexNo(int Value){
            this->RealPart=this->ImPart=Value;
            cout<<"COMPLEX NUMBER IS ::: ("<<RealPart<<") + ("<<ImPart<<")i"<<endl;
        }
        ComplexNo(int Value1,int Value2){
            this->RealPart=Value1;
            this->ImPart=Value2;
            cout<<"COMPLEX NUMBER IS ::: ("<<RealPart<<") + ("<<ImPart<<")i"<<endl;
        }
        void Sum(ComplexNo c1,ComplexNo c2){
            RealPart=c1.RealPart+c2.RealPart;
            ImPart=c1.ImPart+c2.ImPart;
            cout<<"COMPLEX NUMBER IS ::: ("<<RealPart<<") + ("<<ImPart<<")i"<<endl;
        }
};

int main(){
    cout<<endl;
    ComplexNo c1(3),c2(5,-1),c3;
    c3.Sum(c1,c2);
    cout<<endl;
    cout<<endl;
    return 0;
}