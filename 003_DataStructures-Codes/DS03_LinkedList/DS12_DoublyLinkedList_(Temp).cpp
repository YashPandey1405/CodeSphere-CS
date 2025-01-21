#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* prev;  Node* next;
        Node(int CurrData){
            this->data=CurrData;
            this->prev=this->next=NULL;
        }
};

class DoublyLL{
    private:
        Node* Head;
        Node* Tail;
    public:
        DoublyLL(){
            this->Head=this->Tail=NULL;
        }
        void AddFront(int data){
            Node* NewNode=new Node(data);
            if(Head==NULL){
                Head=Tail=NewNode;   
                return;
            }
            Head->prev=NewNode;   NewNode->next=Head;
            Head=NewNode;   
        }
        void RemoveLast(){
            if(Head==NULL){  return ;   }
            Node* Temp=Tail;   Tail=Tail->prev;
            Tail->next=Temp->prev=NULL;
            free(Temp);
        }
        void PrintDLL(){
            Node* Temp=Head;
            cout<<"THE Doubly-LinkedList IS ::: NULL <--> ";
            while(Temp!=NULL){
                cout<<Temp->data<<" <--> ";
                Temp=Temp->next;
            }
            cout<<" NULL"<<endl;
        }
};

int main(){
    DoublyLL dll;
    cout<<endl;
    dll.AddFront(5);
    dll.AddFront(4);
    dll.AddFront(3);
    dll.AddFront(2);
    dll.AddFront(1);
    dll.PrintDLL();
    dll.RemoveLast();
    dll.PrintDLL();
    return 0;
}