// Class Template With Multiple Genertc DataType.......
#include<iostream>
#include<string.h>
using namespace std;

template<class T1 , class T2>
class Academics{
    private:
        string Name; 
        T1 Marks_10, Marks_12;
        T2 Percentage_10 , Percentage_12;
    public:
        Academics(string Name,T1 M10,T1 M12){
            this->Name=Name;
            this->Marks_10=M10;
            this->Marks_12=M12;
            Percentage_10 = float(Marks_10)/5.0;
            Percentage_12 = float(Marks_12)/5.0;
        }
        void Display(){
            cout<<Name<<" GOT "<<Percentage_10<<" % IN CLASS-10th......"<<endl;
            cout<<Name<<" GOT "<<Percentage_12<<" % IN CLASS-12th......"<<endl;
        }        
};

int main(){
    cout<<endl;
    // For Both Objects , type T1=int & type T2=float......
    Academics<int,float> Yash("Yash Pandey",437,469);
    Academics<int,float> Isha("Isha Pandey",449,472);
    Yash.Display();
    cout<<endl;
    Isha.Display();
    return 0;
}