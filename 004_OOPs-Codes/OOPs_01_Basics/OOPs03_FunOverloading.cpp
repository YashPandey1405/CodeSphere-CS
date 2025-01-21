#include <iostream>
using namespace std;

//Function To Calculate Area Of Circle.....
float Area(float Radius){  
    return (3.14)*Radius*Radius;
}

//Function To Calculate Area Of Rectangle.....
int Area(int length, int breath){
    return length * breath;
}

//Function To Calculate Area Of Triangle.....
float Area(float b, float h){
    return (0.5)*b*h;
}

int main(){
    float radius=7.3;
    int Len=5,Bth=7;
    float B=3,H=7; 
    cout<<"AREA OF CIRCLE OF RADIUS ("<<radius<<") IS ::: "<<Area(radius)<<endl;
    cout<<"AREA OF RECTANGLE OF Length ("<<Len<<") AND Breadth ("<<Bth<<") IS ::: "<<Area(Len,Bth)<<endl;
    cout<<"AREA OF TRIANGLE WITH Base ("<<B<<") And Height ("<<H<<") IS ::: "<<Area(B,H)<<endl;
    cout<<endl;
    cout<<endl;
    return 0;
}
