#include<iostream>
using namespace std;

class B;
class C;
class A{
    private:
        int a;
    public:
        A(int a){
            this->a=a;
        }
        friend int SUM(A,B,C);
        friend int sum(A&,B&,C&);
};
class B{
    private:
        int b;
    public:
        B(int b){
            this->b=b;
        }
        friend int SUM(A,B,C);
        friend int sum(A&,B&,C&);
};
class C{
    private:
        int c;
    public:
        C(int c){
            this->c=c;
        }
        friend int SUM(A,B,C);
        friend int sum(A&,B&,C&);
};
int SUM(A obj1,B obj2,C obj3){  // Call By Value.....
    return (obj1.a+obj2.b+obj3.c);
}
int sum(A &obj1,B &obj2,C &obj3){  // Call By Reference.....
    return (obj1.a+obj2.b+obj3.c);
}
int main(){
    A a(10);
    B b(20);
    C c(30);
    int ans=sum(a,b,c);
    cout<<ans<<endl;
    ans=SUM(a,b,c);
    cout<<ans<<endl;
    return 0;
}