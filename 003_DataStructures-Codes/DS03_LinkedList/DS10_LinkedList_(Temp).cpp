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

class LinkedList{
    private:
        int size;
        Node* Head;
        Node* Tail;
    public:
        LinkedList(){
            this->size=0;
            this->Head=NULL;
            this->Tail=NULL;
        }

        void AddFirst(int data){
            Node* NewNode=new Node(data);
            if(Head==NULL){
                Head=Tail=NewNode;
                size++;
                return;
            }
            NewNode->next=Head;
            Head=NewNode;    
            size++;
        }
        void AddLast(int data){
            Node* NewNode=new Node(data);
            if(Head==NULL){
                Head=Tail=NewNode;
                size++;
                return;
            }
            Tail->next=NewNode;
            Tail=NewNode;
            size++;
        }
        void AddMiddle(int data,int idx){
            Node* NewNode=new Node(data);
            if(Head==NULL){
                AddFirst(data);
                return;
            }
            if(idx==size){
                AddLast(data);
                return;
            }
            Node* temp=Head;
            int index=0;
            while(index != (idx-1)){
                temp=temp->next;
                index++;
            }
            NewNode->next=temp->next;
            temp->next=NewNode;
            size++;
        }
        void Reverse_LL(){
            Node* prev=NULL;
            Node* temp=Head;
            Node* ahead=NULL;
            while(temp!=NULL){
                ahead=temp->next;
                temp->next=prev;
                prev=temp;
                temp=ahead;
            }
            Tail=Head;
            Head=prev;
            cout<<"After Reverse_LL() Funtion , ";
        }
        int DeleteStart(){
            if(Head==NULL){
                cout<<"LINKED LIST IS EMPTY , DELETION NOT POSSIBLE"<<endl;
                return(-1);
            }
            Node*temp=Head;
            int Value=temp->data;
            Head=Head->next;
            temp->next=NULL;
            free(temp);
            size--;
            return Value;
        }

        int Delete_Anywhere(int idx){
            if(idx==0){
                int Value=DeleteStart();
                return Value;
            }
            Node* temp=Head;
            Node* ptr=NULL;
            int CurrPos=0;
            while(CurrPos!=(idx-1)){
                temp=temp->next;
                CurrPos++;
            } 
            ptr=temp->next;
            int Value=ptr->data;
            temp->next=ptr->next;
            free(ptr);
            size--;
            return Value;
        }

        int Delete_End(){
            if(Head==NULL){
                cout<<"LINKED LIST IS EMPTY , DELETION NOT POSSIBLE"<<endl;
                return(-1);
            }
            Node*temp=Head;
            Node*ptr=NULL;
            while(temp->next->next!=NULL){
                temp=temp->next;
            }
            ptr=temp->next;
            int Value=ptr->data;
            Tail=temp->next=NULL;
            ptr->next=NULL;
            free(ptr);
            size--;
            return Value;
        }
        int SizeLL(){   return size;   }
        void PrintLL(){
            Node* temp=Head;
            cout<<"THE SINGLY LINKED LIST IS ::: ";
            while(temp!=NULL){
                cout<<temp->data<<" --> ";
                temp=temp->next;
            }
            cout<<"NULL"<<endl;
        }
};

int main(){
    LinkedList ll;
    cout<<endl;
    ll.AddFirst(3); ll.AddFirst(2); ll.AddFirst(1);
    ll.AddLast(5); ll.AddLast(6); ll.AddLast(7);
    ll.PrintLL(); 
    ll.AddMiddle(4,3); ll.PrintLL();
    ll.DeleteStart();ll.PrintLL();
    ll.Delete_End();ll.PrintLL();
    ll.Delete_Anywhere(3);ll.PrintLL();
    ll.Reverse_LL(); ll.PrintLL();
    cout<<"SIZE OF SINGLY LINKED LIST IS ::: "<<ll.SizeLL()<<endl;
    cout<<endl;
    cout<<endl;
    return 0;
}