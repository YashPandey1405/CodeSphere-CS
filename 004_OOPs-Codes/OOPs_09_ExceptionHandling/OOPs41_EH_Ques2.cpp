// Program To Perform (z/(x-y)) And Check The Exception Case When x-y=0.......
#include<iostream>
using namespace std;

void Divide(int x,int y,int z){
    if((x-y)!=0){
        int Den=x-y;
        cout<<"AT x="<<x<<" , y="<<y<<" & z="<<z<<endl;
        cout<<"VALUE OF z/(x-y) IS ::: "<<float(z/float(x-y))<<endl;
        cout<<endl;
    }
    else{
        cout<<"AT x="<<x<<" , y="<<y<<" & z="<<z<<endl;
        throw(x,y,z,x-y);
    }
}

int main(){
    try{
        Divide(30,20,10);
        Divide(20,20,10);
    }
    catch(int Den){
        cout<<"EXCEPTION CAUGHT AS (x-y)="<<Den<<endl;
        cout<<endl;
    }
    return 0;
}