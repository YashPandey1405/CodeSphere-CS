#include <iostream>
using namespace std;

class fib{
    public:
        int val;
        fib(){   val = 0;   }
        fib(fib &obj){
            cout << "Calling The Copy Constructor Of Class fib....." << endl;
            val = obj.val;
        }
        int value(int n){
            if(n == 0){   return 0;   }
            else if(n == 1){  return 1;  }
            return value(n-1) + value(n-2);
        }
        void setValue(int n){  val = value(n);  }

};

int main(){
    cout<<endl;
    int idx;
    cout << "ENTER THE INDEX FOR FIBONACCI SERIES ::: ";
    cin >> idx;
    fib f1;
    f1.setValue(idx);
    fib f2(f1);
    cout << "THE VALUE AT INDEX-"<<idx<<" IN FIB-SERIES IS ::: "<< f2.val;
    cout<<endl;
    cout<<endl;
    return 0;
} 