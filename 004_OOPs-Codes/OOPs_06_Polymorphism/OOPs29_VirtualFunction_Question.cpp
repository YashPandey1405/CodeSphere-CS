// The Problem Based On Pure Virtual Function Is : -
// Create a class called LIST with two pure virtual function store() and retrieve().
// To store a value call store and to retrieve call retrieve function.
// Derive two classes stack and queue from it and override store and retrieve.....

#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node(int data){
            this->data=data;
            this->next=NULL;
        }
};

class List{
    public:
        Node* Head;
        Node* Tail;
        int Size;
        List(){}  // Default Constructor Of Class List......
        virtual void Store(int data)=0;  // Pure Virtual Function.......
        virtual void Retrieve()=0;  // Pure Virtual Function.......
};

class Stacks : public List{
    private:
        Node* Top;
    public:
        Stacks(){
            this->Head=this->Tail=this->Top=NULL;
            this->Size=0;
        }
        void Store (int data) override{
            Node* NewNode=new Node(data);
            if(Head==NULL){
                Head=Tail=Top=NewNode;
                Size++;
                return;
            }
            NewNode->next=Head;
            Head=Top=NewNode;
            Size++;
        }
        void Retrieve() override{
            cout<<"THE STACK IS ::: (Top)--> ";
            Node* Temp=Top;
            while(Temp->next!=NULL){
                cout<<Temp->data<<" , ";
                Temp=Temp->next;
            }
            cout<<Temp->data<<endl;
            cout<<"TOTAL No OF ELEMENTS IN THE STACK ARE ::: "<<Size<<endl;
            cout<<endl;
        }
};

class Queues : public List{
    private:
        Node* Front;
        Node* Rear;
    public:
        Queues(){
            this->Head=this->Tail=this->Front=this->Rear=NULL;
            this->Size=0;
        }
        void Store(int data) override{
            Node* NewNode=new Node(data);
            if(Head==NULL){
                Head=Tail=Front=Rear=NewNode;
                Size++;
                return;
            }
            Tail->next=NewNode;
            Tail=Rear=NewNode;
            Size++;
        }
        void Retrieve() override{
            cout<<"THE QUEUE IS ::: (Front) --> ";
            Node* temp=Front;
            while(temp->next!=NULL){
                cout<<temp->data<<" , ";
                temp=temp->next;
            }
            cout<<temp->data<<" <-- (Rear)"<<endl;
            cout<<"TOTAL No OF ELEMENTS IN THE QUEUE ARE ::: "<<Size<<endl;
            cout<<endl;
        }
};

int main(){
    cout<<endl;
    Stacks s;
    Queues q;
    for(int i=1;i<=5;i++){
        s.Store(i*10);
        q.Store(i*10);
    }
    s.Retrieve();
    q.Retrieve();
    return 0;
}