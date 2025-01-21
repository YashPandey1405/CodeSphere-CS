#include<iostream>
#include<string.h>
using namespace std;

class GrandParents{
    private:
        string GrandFather;
        string GrandMother;
    public:
        void GetData1(string grandfather,string grandmother){
            this->GrandFather=grandfather;
            this->GrandMother=grandmother;
        }
        string Get_GrandFather(){  return this->GrandFather;  }
        string Get_GrandMother(){  return this->GrandMother;  }
};

class Son : public GrandParents{
    private:
        string Father;
        string Mother;
    public:
        void GetData2(string father,string mother){
            this->Father=father;
            this->Mother=mother;
        }
        string Get_Father(){  return this->Father;  }
        string Get_Mother(){  return this->Mother;  }
};

class Daughter : public GrandParents{
    private:
        string Father;
        string Mother;
    public:
        void GetData3(string father,string mother){
            this->Father=father;
            this->Mother=mother;
        }
        string Get_Father(){  return this->Father;  }
        string Get_Mother(){  return this->Mother;  }

};

class GrandSon_Son : public Son{
    private:
        string GrandSon_Name;
        string Sister;
    public:
        void GetData4(string name,string sister){
            this->GrandSon_Name=name;
            this->Sister=sister;
        }
        void Display1(){
            cout<<"GRANDFATHER OF '"<<GrandSon_Name<<"' IS ::: "<<Get_GrandFather()<<endl;
            cout<<"GRANDMOTHER OF '"<<GrandSon_Name<<"' IS ::: "<<Get_GrandMother()<<endl;
            cout<<endl;
            cout<<"FATHER OF '"<<GrandSon_Name<<"' IS ::: "<<Get_Father()<<endl;
            cout<<"MOTHER OF '"<<GrandSon_Name<<"' IS ::: "<<Get_Mother()<<endl;
            cout<<"SISTER OF '"<<GrandSon_Name<<"' IS ::: "<<Sister<<endl;
        }
};

class GrandDaughter_Son : public Son{
    private:
        string GrandDaughter_Name;
        string Brother;
    public:
        void GetData5(string name,string brother){
            this->GrandDaughter_Name=name;
            this->Brother=brother;
        }
        void Display2(){
            cout<<"GRANDFATHER OF '"<<GrandDaughter_Name<<"' IS ::: "<<Get_GrandFather()<<endl;
            cout<<"GRANDMOTHER OF '"<<GrandDaughter_Name<<"' IS ::: "<<Get_GrandMother()<<endl;
            cout<<endl;
            cout<<"FATHER OF '"<<GrandDaughter_Name<<"' IS ::: "<<Get_Father()<<endl;
            cout<<"MOTHER OF '"<<GrandDaughter_Name<<"' IS ::: "<<Get_Mother()<<endl;
            cout<<"BROTHER OF '"<<GrandDaughter_Name<<"' IS ::: "<<Brother<<endl;
        }

};

class GrandSon_Daughter : public Daughter{
     private:
        string GrandSon_Name;
        string Sister;
    public:
        void GetData6(string name,string sister){
            this->GrandSon_Name=name;
            this->Sister=sister;
        }
        void Display3(){
            cout<<"GRANDFATHER OF '"<<GrandSon_Name<<"' IS ::: "<<Get_GrandFather()<<endl;
            cout<<"GRANDMOTHER OF '"<<GrandSon_Name<<"' IS ::: "<<Get_GrandMother()<<endl;
            cout<<endl;
            cout<<"FATHER OF '"<<GrandSon_Name<<"' IS ::: "<<Get_Father()<<endl;
            cout<<"MOTHER OF '"<<GrandSon_Name<<"' IS ::: "<<Get_Mother()<<endl;
            cout<<"SISTER OF '"<<GrandSon_Name<<"' IS ::: "<<Sister<<endl;
        }
};

class GrandDaughter_Daughter : public Daughter{
    private:
        string GrandDaughter_Name;
        string Brother;
    public:
        void GetData7(string name,string brother){
            this->GrandDaughter_Name=name;
            this->Brother=brother;
        }
        void Display4(){
            cout<<"GRANDFATHER OF '"<<GrandDaughter_Name<<"' IS ::: "<<Get_GrandFather()<<endl;
            cout<<"GRANDMOTHER OF '"<<GrandDaughter_Name<<"' IS ::: "<<Get_GrandMother()<<endl;
            cout<<endl;
            cout<<"FATHER OF '"<<GrandDaughter_Name<<"' IS ::: "<<Get_Father()<<endl;
            cout<<"MOTHER OF '"<<GrandDaughter_Name<<"' IS ::: "<<Get_Mother()<<endl;
            cout<<"BROTHER OF '"<<GrandDaughter_Name<<"' IS ::: "<<Brother<<endl;
        }
};

int main(){
    int choice;
    cout<<"ENTER 1->'Yash' , 2->'Isha' , 3->'Prakash' , 4->'Ruchi' ::: ";
    cin>>choice;
    cout<<endl;
    if(choice==1){
        GrandSon_Son Yash;
        Yash.GetData1("Hira Lal Pandey","Prem Pandey");
        Yash.GetData2("Prabhash Pandey","Annu Pandey");
        Yash.GetData4("Yash Pandey","Isha Pandey");
        Yash.Display1();
    }
    else if(choice==2){
        GrandDaughter_Son Isha;
        Isha.GetData1("Hira Lal Pandey","Prem Pandey");
        Isha.GetData2("Prabhash Pandey","Annu Pandey");
        Isha.GetData5("Isha Pandey","Yash Pandey");
        Isha.Display2();
    }
    else if(choice==3){
        GrandSon_Daughter Prakash;
        Prakash.GetData1("Hira Lal Pandey","Prem Pandey");
        Prakash.GetData3("Radhey Shyam Mishra","Parvati Mishra");
        Prakash.GetData6("Prakash Mishra","Ruchi Mishra");
        Prakash.Display3();
    }
    else if(choice==4){
        GrandDaughter_Daughter Ruchi;
        Ruchi.GetData1("Hira Lal Pandey","Prem Pandey");
        Ruchi.GetData3("Radhey Shyam Mishra","Parvati Mishra");
        Ruchi.GetData7("Ruchi Mishra","Prakash Mishra");
        Ruchi.Display4();
    }
    else{
        cout<<"ENTERED WRONG CHOICE.........."<<endl;
    }
    return 0;
}