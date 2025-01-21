#include<iostream>
#include<string.h>
using namespace std;

class Strings{
    private:
        string str;
        int Length;
    public:
        Strings(void){};       //Default Constructor......
        Strings(string Temp){  //Parameterized Constructor......
            this->str=Temp;
            this->Length=Temp.length();
        }
        Strings(Strings& Obj){   //Copy Constructor......
            this->str=Obj.str;
            this->Length=Obj.Length;
        }
        string GetString(void){  return this->str;  }
        Strings operator+(Strings &Str1){   
            Strings temp;
            temp.str=this->str;
            temp.str.append(Str1.str);
            temp.Length = Length+Str1.Length;
            return temp;
        }
        void operator==(Strings &Str1){
            this->str=Str1.str;
            this->Length=Str1.Length;
        }
        bool operator<(Strings &Str1){
            return (this->Length<Str1.Length);
        }
        bool operator>(Strings &Str1){
            return (this->Length>Str1.Length);
        }
        bool operator^(Strings &Str1){
            return (this->Length==Str1.Length);
        }
        friend void Display(Strings);
};

void Display(Strings Str){
    cout<<"STRING IS ::: "<<Str.str<<" WITH STRING LENGTH ::: "<<Str.Length<<endl;
}

int main(){
    Strings str1("Yash_");
    Strings str2("Pandey");
    Display(str1);  Display(str2);
    cout<<endl;
    
    cout<<"AFTER (+) OVERLOADING --> ";
    Strings str3;   str3=str1+str2;
    Display(str3);

    cout<<"AFTER (==) OVERLOADING --> ";
    Strings str4;  str4==str3;
    Display(str4);

    Strings str5("Yash Pandey");
    bool Comp1=(str5<str4);
    cout<<"IS '"<<str5.GetString()<<"' < '"<<str4.GetString()<<"' ::: "<<Comp1<<endl;
    bool Comp2=(str5>str4);
    cout<<"IS '"<<str5.GetString()<<"' > '"<<str4.GetString()<<"' ::: "<<Comp2<<endl;
    bool Comp3=(str5^str4);  // Here ^ Means = i.e (str5^str4) Is Same as (str5==str4).......
    cout<<"IS '"<<str5.GetString()<<"' = '"<<str4.GetString()<<"' ::: "<<Comp3<<endl;

    return 0;
}