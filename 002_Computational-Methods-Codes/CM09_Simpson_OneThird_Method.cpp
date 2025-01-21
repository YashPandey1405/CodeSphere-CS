//Code To Implement Simpson-(1/3)-Rule Using C++.....
#include<iostream>
#include <math.h>
#include <iomanip>
using namespace std;

#define f(x)  (1/(1+x))  // Function Expression......
#define I(x)  (log(1+x))        // Integrated Function......
float Y[5];

void Display(float h,float Start){
    cout<<"x"<<"\t   "<<setprecision(10)<<"f(x)"<<endl;
    float Num=Start;
    for(int i=0;i<=4;i++){
        cout<<setprecision(5)<<Num<<"\t"<<setprecision(10)<<Y[i]<<endl;
        Num =Num+h;
    }
    cout<<endl;
}

int main(){
    cout<<endl;
    float a,b,h;

    // Statements To Input The Range From The User......
    cout<<"ENTER THE START VALUE FOR INTEGRATION ::: ";
    cin>>a;
    cout<<"ENTER THE END VALUE FOR INTEGRATION ::: ";
    cin>>b;
    cout<<endl;
    h=(b-a)/4;

    float  temp=a;
    for(int i=0;i<=4;i++){
        Y[i]=f(temp);  temp += h;
    }

    Display(h,a);

    // Approx Value Calculated By Simpson-(1/3)-Rule......
    float Approx_f_x=(h/3)*((Y[0]+Y[4]) + 4*(Y[1]+Y[3]) + 2*(Y[2]));

    // Actual Value Calculated By Integration......
    float Actual_f_x=I(b)-I(a);

    cout<<"APPROX VALUE OF INTEGRATION IS ::: "<<setw(8)<<Approx_f_x<<endl;
    cout<<"ACTUAL VALUE OF INTEGRATION IS ::: "<<setw(8)<<Actual_f_x<<endl;
    
    float Error= (Actual_f_x>Approx_f_x) ? (Actual_f_x-Approx_f_x) : (Approx_f_x-Actual_f_x);
    cout<<"THE ERROR IN THE APPROX VALUE IS ::: |Actual-Approx| i.e "<<Error<<endl;
    cout<<endl;
    return 0;
}