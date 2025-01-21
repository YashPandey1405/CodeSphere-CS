// Complete Concept Of Function Template With All Cases.......
#include<iostream>
using namespace std;

// Function To Implement Function Template With Single Parameter......
template<class T>  
void Swap(T &val1 , T &val2){
    T Temp=val1;  
    val1=val2;
    val2=Temp;
}

// Function To Implement Function Template With Multiple Parameters......
template<class T1,class T2>
T2 FindMax(T1 a,T1 b,T2 c,T2 d){
    if(a>b){
        return (a>c) ? ((a>d) ? a : d) : ((c>d) ? c :d);
    }
    else{
        return (b>c) ? ((b>d) ? b : d) : ((c>d) ? c :d);
    }

}

// Function To Implement OverLoading Of Function Template......
template<class T>
void Display(T Val){
    cout<<"Template Display ::: The Value Of Formal Parameter IS ::: "<<Val<<endl;
}
void Display(int Val){  // This Fn Will Run When DataType Of Val=Integer......
    cout<<"Explicit Display ::: The Value Of Formal Parameter IS ::: "<<Val<<endl;
}

void Fun(int Val1,int Val2,float Val3,float Val4){

    // Template Function For Integer Values......
    cout<<"BEFORE SWAP ::: Val1 = "<<Val1<<" AND Val2 = "<<Val2<<endl;
    Swap(Val1,Val2);  // This Will Call Swap() For T=int DataType.......
    cout<<"AFTER SWAP ::: Val1 = "<<Val1<<" AND Val2 = "<<Val2<<endl;

    cout<<endl;

    // Template Function For Float Values......
    cout<<"BEFORE SWAP ::: Val3 = "<<Val3<<" AND Val4 = "<<Val4<<endl;
    Swap(Val3,Val4);  // This Will Call Swap() For T=float DataType.......
    cout<<"AFTER SWAP ::: Val3 = "<<Val3<<" AND Val4 = "<<Val4<<endl; 

    cout<<endl;

    float Max=FindMax(Val1,Val2,Val3,Val4);
    cout<<"MAX VALUE OF THESE 4 VALUES IS ::: "<<Max<<endl;
    
    cout<<endl;

    Display(Val1); Display(Val2);
    Display(Val3); Display(Val4);
}

int main(){
    Fun(2,5,2.5,5.3);
    return 0;
}