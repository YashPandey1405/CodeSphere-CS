#include<iostream>
using namespace std;

class Student {
    private:
	    string name;
	    int age;
    public:
	    Student() {}
	    Student(string name, int age) {
	    	this->name = name;
	    	this->age = age;
	    }
	    void display() {
	    	cout<< "NAME ::: " << this->name << endl;
	    	cout<< "AGE ::: " << this->age << endl;
	    }
	    void * operator new(size_t size){
	    	cout<< "Overloading new operator with size ::: " << size << endl;
	    	void * p = ::operator new(size); 
	    	return p;
	    }
	    void operator delete(void * p) {
	    	cout<< "Overloading delete operator........ " << endl;
	    	free(p);
	    }
};

int main() {
	cout<<endl;
	Student* p = new Student("Yash", 122);
	p->display();
	delete p;
	cout<<endl;
	cout<<endl;
	return 0;
}