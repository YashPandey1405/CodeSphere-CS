// Program To Perform (a/(a-b)) And Check The Exception Case When a-b=0.......
#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"ENTER THE VALUE OF a ::: ";
    cin>>a;
    cout<<"ENTER THE VALUE OF b ::: ";
    cin>>b;
    try{
        int x=(a-b);
        if(x!=0){
            cout<<"Value of a/(a-b) IS ::: "<<float(a/x)<<endl;
        }
        else{
            throw(x);  // This Will Run When x=0.......
        }
    }
    catch(int x){
        cout<<"EXCEPTION CAUGHT AT a="<<a<<" AND b="<<b<<" , VALUE OF x="<<x<<endl;
    }
    return 0;
}