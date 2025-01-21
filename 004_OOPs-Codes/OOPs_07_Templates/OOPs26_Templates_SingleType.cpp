// Class Template With Single Genertc DataType.......
#include<iostream>
using namespace std;

template<class T>
class Vector{
    private:
        T* ptr;
        int Size=3;
    public:
        Vector(){
            ptr=new T[Size];
            for(int i=0;i<Size;i++){
                ptr[i]=0;
            }
        }
        void SetVector(T* a){
            for(int i=0;i<Size;i++){
                ptr[i]=a[i];
            }
        }
        T operator*(Vector &obj){
            T sum=0;
            for(int i=0;i<Size;i++){
                sum += (this->ptr[i]*obj.ptr[i]);
            }
            return sum;
        }
};

int main(){
    float arr1[3]={2.3,3.6,4.8};
    float arr2[3]={4.2,2.3,6.8};
    Vector<float> v1;  // For v1 , type T=int......
    Vector<float> v2;  // For v2 , type T=int......
    v1.SetVector(arr1);
    v2.SetVector(arr2);
    float R=v1*v2;
    cout<<"SCALUR PRODUCT OF VECTOR v1 & v2 IS ::: "<<R<<endl;
    return 0;
}