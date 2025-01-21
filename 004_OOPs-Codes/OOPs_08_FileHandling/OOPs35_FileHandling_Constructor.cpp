#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main(){
    // Array Of String In C++.....
    string Bio[5]={"Hello I Am Yash Pandey","I Am 2nd Year B.Tech CSE Student At MAIT",
                "I Want To Become An Elite Software Engineer","I Want To Make My Parents Happy",
                "I Want Good Physical And Mental Health And For Me Health > Everything"};
    string Intro[5];  // Array Of String In C++.....
    ofstream output("Temp35.txt");  //ofstream Is Inbuilt Class In Header File->"fstream"........
    for(int i=0;i<5;i++){
        output<<Bio[i]<<endl;
    }
    ifstream input("Temp35.txt");  //ifstream Is Inbuilt Class In Header File->"fstream"........
    for(int i=0;i<5;i++){
        getline(input,Intro[i]);
        cout<<Intro[i]<<endl;
    }
    return 0;
}