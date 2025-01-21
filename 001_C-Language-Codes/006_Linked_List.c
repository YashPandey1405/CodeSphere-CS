#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node*Next;
}*Start=NULL; //Start Pointer Of Struct Node is Global/Public.....

void addfirst(int key,struct Node**head){ //Function To Add Node At Start Of Linked List.....
    struct Node*temp;
    temp=malloc(sizeof(struct Node));
    if(temp!=NULL){ //Linking Temp Node To The Start Of The Linked List....
        temp->data=key;
        temp->Next=*head;
        *head=temp;
    }
}

void addlast(int key){ //Function To Add Node At End Of Linked List.....
    struct Node*temp,*ptr;
    temp=malloc(sizeof(struct Node));
    if(Start==NULL){ //When Linked List Is Empty....
        Start=temp;
        temp->data=key;
        temp->Next=NULL;
    }
    while(ptr->Next!=NULL){ //Loop To Reach The Last Node Of The Linked List.....
        ptr=ptr->Next;
    }
    if(temp!=NULL){ //Linking Temp Node To The Last Of The Linked List....
        temp->data=key;
        ptr->Next=temp;
        temp->Next=NULL;
    }
}

void removefirst(){ //Function To Remove First Node Of Linked List.....
    struct Node*temp=Start;
    if(Start==NULL){
        return;
    }
    Start=Start->Next;
    free(temp);
}

void removelast(){ //Function To Remove Last Node Of Linked List.....
    struct Node*temp,*ptr;
    ptr=Start;
    if(Start==NULL){
        return;
    }
    while(ptr->Next->Next!=NULL){
        ptr=ptr->Next;
    }
    temp=ptr->Next;
    ptr->Next=NULL;
    free(temp);
}

int dataAtMidNode(){ //Function To Print The Data Present At Mid Node......
    struct Node*ptr=Start;
    int count=0;
    if(Start==NULL){ //When The Linked List Is Empty....
        return -1;
    }
    while(ptr!=NULL){ //Loop To Count The Number Of Nodes In The Linked List..... 
        count++;
        ptr=ptr->Next;
    }
    ptr=Start;
    count=count/2;
    for(int i=1;i<=count;i++){
        ptr=ptr->Next;
    }
    return ptr->data;
}

void removemid(){ //Function To Remove The Mid Node Of The Linked List......
    struct Node*ptr,*temp;
    ptr=Start;
    int count=0;
    if(Start==NULL){ //When The Linked List Is Empty....
        return;
    }
    while(ptr!=NULL){ //Loop To Count The Number Of Nodes In The Linked List..... 
        count++;
        ptr=ptr->Next;
    }
    ptr=Start;
    count=count/2;
    for(int i=1;i<count;i++){
        ptr=ptr->Next;
    }
    temp=ptr->Next;
    ptr->Next=temp->Next;
    free(temp);
}

void RemoveMid2Pointers(){ //Function To Remove The Mid Node Of The Linked List With 2 Pointer Approach......
    struct Node*ptr=Start;
    struct Node*slow=Start;
    struct Node*fast=Start;
    if(Start==NULL){ //When The Linked List Is Empty....
        return;
    }
    while(fast!=NULL && fast->Next!=NULL){ //Loop To Reach The Mid Node Of The Linked List..... 
        ptr=slow;
        slow=slow->Next;
        fast=fast->Next->Next;
    }
    ptr->Next=slow->Next;
    free(slow);
}

void reverse(struct Node**head){ //Function To Reverse The Linked List......
    struct Node*curr,*prev,*ahead;
    if((*head)==NULL || (*head)->Next==NULL){ //When LL Is Empty Or Has Only One Node....
        return;
    }
    prev=NULL;
    curr=(*head);
    while(curr!=NULL){
        ahead=curr->Next;
        curr->Next=prev;
        prev=curr;
        curr=ahead;
    }
}

void print(struct Node**head){ //Function To Print Nodes Of Linked List.....
    struct Node*temp=(*head);
    printf("LINKED LIST IS ::: ");
    while(temp!=NULL){
        printf("%d -> ",temp->data);
        temp=temp->Next;
    }
    printf("null\n");
}

int main(){
    printf("\n");
    for(int i=5;i>0;i--){
        addfirst(i*10,&Start);
    }
    for(int i=6;i<=10;i++){
        addlast(i*10);
    }
    // print();
    // printf("MID NODE IS ::: %d\n",dataAtMidNode());
    // removemid();
    // print();
    // printf("MID NODE IS ::: %d\n",dataAtMidNode());
    // RemoveMid2Pointers();
    // print();    
    reverse(&Start);
    print(&Start);    
    printf("\n");
    return 0;
}