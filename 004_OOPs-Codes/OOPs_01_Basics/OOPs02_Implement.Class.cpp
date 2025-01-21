#include<iostream>
using namespace std;

class Student{
    public:
        char Name[30];
        char Branch[30];
        int Age;
        int SubMarks[5];
        int RollNo;
        Student(int RNo,int age){
            this->RollNo=RNo;
            this->Age=age;
            cout<<"ENTER THE NAME OF THE STUDENT ::: ";
            cin>>Name;
            cout<<"ENTER THE BRANCH OF "<<Name<<" ::: ";
            cin>>Branch;
            for(int i=0;i<5;i++){
                cout<<"ENTER THE MARKS OF SUBJECT-"<<(i+1)<<" ::: ";
                cin>>SubMarks[i];
            }
            cout<<endl;
        }
        void MarksGrade(){
            float TotalMarks=0.0;
            for(int i=0;i<5;i++){
                TotalMarks += SubMarks[i];
            }
            float MarksAvg=TotalMarks/5.0;
            if(MarksAvg>70.0){
                cout<<Name<<" GOT "<<MarksAvg<<" PERCENTAGE IN THE 5 SUBJECTS"<<endl;
                cout<<Name<<" HAS RollNo : ("<<RollNo<<") FROM "<<Branch<<" BRANCH"<<endl;
                cout<<"AGE OF "<<Name<<" IS ::: "<<Age<<endl;

            }
            // else{
            //     cout<<Name<<" GOT ONLY "<<MarksAvg<<" MARKS IN THE 5 SUBJECTS";
            // }
        }
};

int main(){
    cout<<endl;
    Student Yash(122,20);
    Yash.MarksGrade();
    cout<<endl;
    cout<<endl;
    return 0;
}