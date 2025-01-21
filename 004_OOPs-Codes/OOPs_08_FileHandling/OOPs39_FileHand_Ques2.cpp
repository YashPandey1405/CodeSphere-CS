#include<iostream>
#include<fstream>
using namespace std;
class student{
    private:
        string data = "student.txt";
        string name;
        int age;
        char sex;
        float height;
        float weight;
    public:
        void write(){
            ofstream MyFile;
            MyFile.open(data,ios::app);
            cout << "ENTER THE NAME OF THE STUDENT ::: ";
            cin >> name;
            cout << "ENTER THE AGE OF THE STUDENT ::: ";
            cin >> age;
            cout << "ENTER THE GENDER OF THE STUDENT ::: ";
            cin >> sex;
            cout << "ENTER THE HEIGHT OF THE STUDENT ::: ";
            cin >> height;
            cout << "ENTER THE WEIGHT OF THE STUDENT ::: ";
            cin >> weight;
            cout << endl;
            MyFile << name << " " << age << " " << sex << " " << height << " " << weight << endl;
            MyFile.close();
        }
        void read(){
            char ch;
            ifstream MyFile(data);
            cout << "THE CONTENT IN THE FILE IS ::: ";
            while (MyFile.good()) {
                MyFile.get(ch);
                cout << ch;
            }
            MyFile.close();
        }
};

int main(){
    cout<<endl;
    student s1;
    s1.write();
    s1.read();
    cout<<endl;
    return 0;
}
