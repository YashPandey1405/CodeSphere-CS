//Code To Find The Intersection Point Of 2 Linked List....
#include<stdio.h>
struct Node{
    int data;
    struct Node*Next;
};
int IntersectionLL(struct Node*head1,struct Node*head2){
    int c1=0,c2=0;
    struct Node*ptr1=head1;
    struct Node*ptr2=head2;
    while(ptr1){
        c1++;
        ptr1=ptr1->Next;
    }
    while(ptr2){
        c2++;
        ptr2=ptr2->Next;
    }
    ptr1=head1;
    ptr2=head2;
    int diff=abs(c1-c2); //This Is Same As |c1-c2|==modullus(c1-c2)....
    if(c1>c2){
        for(int i=0;i<diff;i++){
            ptr1=ptr1->Next;
        }
    }    
    else if(c1<c2){
        for(int i=0;i<diff;i++){
            ptr2=ptr2->Next;
        }
    }
    while(ptr1 != ptr2){
        ptr1=ptr1->Next;
        ptr2=ptr2->Next;
    }    
    if(ptr1 !=NULL){ return ptr1->data; }
    return -1;
}
