#include <iostream> 
#include <string.h> 
using namespace std; 

class Basic_Info {
    private:
        string Name;
        int RollNo;
        char Gender;
    public:
        void getdata_Base(string name,int rollno,char gender) {
            this->Name=name;
            this->RollNo=rollno;
            this->Gender=gender;
            // strcpy(Name,name);
            // strcpy(Gender,gender);
        }
        void Display_Base(){
            cout<<"NAME OF THE STUDENT IS ::: "<<Name<<endl;
            cout<<"ROLL No OF THE STUDENT IS ::: "<<RollNo<<endl;
            cout<<"GENDER OF THE STUDENT IS ::: "<<Gender<<endl;
        }
 };

class Physical_Fit : public Basic_Info {
    private:
        int Height;
        int Weight;
    public:
        void getdata_Derived(int h,int w) {
            this->Height=h;
            this->Weight=w;
        }
        void Display_Derived(){
            cout<<"HEIGHT OF THE STUDENT IS ::: "<<Height<<" cm"<<endl;
            cout<<"WEIGHT OF THE STUDENT IS ::: "<<Weight<<" kg"<<endl;
        }


 };
 
 int main() {
    Physical_Fit derived; 
    derived.getdata_Base("Aryan",143,'M');
    derived.getdata_Derived(164,76);
    derived.Display_Base();
    derived.Display_Derived();
    return 0;
 }    