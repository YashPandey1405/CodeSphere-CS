#include<iostream>
using namespace std;

class StringOperation{
    public:
        StringOperation(){}
        int GetLength(char str1[]){
            char* ptr=str1;
            int Len = 0;
            while(ptr[Len]){
                Len++;
            }
            return Len;
        }
        void To_Uppercase(char str1[]){
            int Size=GetLength(str1);
            for(int i=0;i<Size;i++){
                char ch=str1[i];
                int Val=(int)ch;
                if(Val>=97 && Val<=122){
                    str1[i] =str1[i]-' ';  //ASCII Value Of " " Is 32.....
                }
            }
            cout<<"THE Uppercase-STRING IS ::: ";
            for(int i=0;i<Size;i++){
                cout<<str1[i]<<"";
            }
            cout<<endl;
        }
        void To_Lowercase(char str1[]){
            int Size=GetLength(str1);
            for(int i=0;i<Size;i++){
                char ch=str1[i];
                int Val=(int)ch;
                if(Val>=65 && Val<=90){
                    str1[i] =str1[i]+' ';  //ASCII Value Of " " Is 32.....
                }
            }
            cout<<"THE Lowercase-STRING IS ::: ";
            for(int i=0;i<Size;i++){
                cout<<str1[i]<<"";
            }
            cout<<endl;
        }

        

};

int main(){
    cout<<endl;
    char ch[]="Yash_Pandey";
    StringOperation str1;
    int Len=str1.GetLength(ch);
    cout<<"THE LENGTH OF STRING '"<<ch<<"' IS ::: "<<Len<< endl;
    str1.To_Uppercase(ch);
    str1.To_Lowercase(ch);
    cout<<endl;
    cout<<endl;
    return 0;
}