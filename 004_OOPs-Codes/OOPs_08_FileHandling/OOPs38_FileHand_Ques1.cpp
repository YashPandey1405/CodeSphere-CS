#include <iostream>
#include <fstream>
using namespace std;

int main(){
    cout<<endl;
    ifstream Input1;
    Input1.open("sample.txt");
    char SingleChar;
    cout << "THE Input1 TEXT IS ::: "<< endl;
    
    while (Input1.good()){
        Input1.get(SingleChar);
        cout << SingleChar;
    }
    cout << endl;

    ifstream Input("sample.txt");
    // Input1.seekg(0);
    Input.get(SingleChar);
    
    ofstream Output("out.txt");
    while (Input.good()){
        if ((SingleChar != ' ') && (SingleChar != '\n') && (SingleChar != '\t') && (SingleChar != '\r')){
            Output << SingleChar;
        }
        Input.get(SingleChar);
    }
    cout << endl << "Output Text is generated!"<< endl;
    cout<<endl;
    return 0;
}