#include<iostream>
using namespace std;

class Student{
    private:
        char Name[30];
        float total;
        int arr[5];
    public:
        Student(){
            cout<<"ENTER THE NAME OF THE STUDENT ::: ";
            cin>>Name;
            for(int i=0;i<5;i++){
                cout<<"ENTER MARKS OF "<<Name<<" IN SUBJECT "<<(i+1)<<" ::: ";
                cin>>arr[i];
                total += arr[i];
            }
            cout<<endl;
        }
        Student(int n1,int n2,int n3,int n4,int n5){
            cout<<"ENTER THE NAME OF THE STUDENT ::: ";
            cin>>Name;
            total=n1+n2+n3+n4+n5;
            cout<<endl;
        }
        void AvgMarks(){
            float avg=total/5.0;
            if(avg>70.0){
                cout<<Name<<" GOT "<<avg<<" MARKS IN THE 5 SUBJECTS"<<endl;
            }
        }
};

int main(){
    // Student s1,s2,s3,s4;
    cout<<endl;
    Student s1(87,89,90,84,80);
    Student s2(97,89,82,84,93);
    Student s3(57,59,60,64,70);
    Student s4(67,79,75,84,70);
    Student s5(71,67,65,62,76);
    s1.AvgMarks();
    s2.AvgMarks();
    s3.AvgMarks();
    s4.AvgMarks();
    s5.AvgMarks();
    return 0;
}