#include <iostream>
using namespace std;

class Time{
    int Hours;
    int Minutes;
    int Seconds;
    long TotalTime;
    public:
        Time(void){};
        Time(long tt){
            TotalTime=tt;
            Seconds=TotalTime;
            Minutes=(TotalTime/60);
            Seconds=TotalTime-(Minutes*60);
            Hours=Minutes/60;
            Minutes=Minutes-(Hours*60);
        }
        void DisplayTime(){
            cout<<"TIME ("<<TotalTime<<")Sec IS ::: ("<<Hours<<")H ("<<Minutes<<")M ("<<Seconds<<")S"<<endl;
        }
        void TimeSum(Time t1,Time t2){
            Seconds=t1.Seconds+t2.Seconds;
            int min=Seconds/60;
            Seconds=Seconds%60;
            Minutes=min+t1.Minutes+t2.Minutes;
            int hrs=Minutes/60;
            Minutes=Minutes%60;
            Hours=hrs+t1.Hours+t2.Hours;
            cout<<"TIME IS ::: ("<<Hours<<")H ("<<Minutes<<")M ("<<Seconds<<")S"<<endl;
        }
};

int main(){
    cout<<endl;
    Time t1(10562);
    t1.DisplayTime();
    Time t2(12579);
    t2.DisplayTime();
    Time t3;
    t3.TimeSum(t1,t2);
    cout<<endl;
    cout<<endl;
    return 0;
}