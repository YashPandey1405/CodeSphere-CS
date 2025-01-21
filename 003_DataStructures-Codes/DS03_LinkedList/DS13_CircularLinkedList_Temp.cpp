#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node(int CurrData){
            this->data=CurrData;
            this->next=NULL;
        }
};

class CircularLL{
    private:
        int Size_CLL;
        Node* Head;
        Node* Tail;
    public:
        CircularLL(){
            this->Size_CLL=0;
            Head=Tail=NULL;
        }
        void AddFirst(int data){
            Node* NewNode=new Node(data);
            if(Head==NULL){
                Head=Tail=NewNode;
                Tail->next=Head;
            }
            NewNode->next=Head;
            Head=NewNode;
            Tail->next=Head;
        }
        int RemoveLast(){
            if(Head==NULL){
                cout<<"THE CIRCULAR LINKED LIST IS EMPTY";
                return (-1);
            }
            if(Head->next==NULL){
                int Value=Head->data;
                Head=Tail=NULL;
                return Value;
            }
            Node* temp=Tail;
            int Value=Tail->data;
            Node* ptr=Head;
            while(ptr->next!=Tail){
                ptr=ptr->next;
            }
            Tail=ptr;
            Tail->next=Head;
            free(temp);
            return Value;
        }
        void PrintCLL(){
            Node* temp=Head;
            cout<<"THE CIRCULAR LINKED LIST IS ::: ";
            while(temp!=Tail){
                cout<<temp->data<<" --> ";
                temp=temp->next;
            }
            cout<<Tail->data<<" --> Head"<<endl;
        }
};

int main(){
    CircularLL cll;
    cout<<endl;
    cll.AddFirst(5);
    cll.AddFirst(4);
    cll.AddFirst(3);
    cll.AddFirst(2);
    cll.AddFirst(1);
    cll.PrintCLL();
    cll.RemoveLast();
    cll.PrintCLL();
    cout<<endl;
    cout<<endl;
    return 0;
}