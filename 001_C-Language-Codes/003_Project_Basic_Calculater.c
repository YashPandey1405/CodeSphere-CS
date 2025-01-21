#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int k=0,result=0;

int menu(){
    int entry;
    printf("\n");
    printf("1. Press 1 For Addition\n");
    printf("2. Press 2 For Subtraction\n");
    printf("3. Press 3 For Multiplication\n");
    printf("4. Press 4 For Division\n");
    printf("5. Press 5 To Get Remainder\n");
    printf("6. Press 6 To Clear The Result\n");
    printf("7. Press 7 For Exit\n");
    printf("Enter your choice ::: ");
    scanf("%d",&entry);
    return(entry);
}

void Add(){
    int a,b;
    if(k){
        printf("\nEnter a number: ");
        scanf("%d",&a);
        result+=a;
        printf("\nResult=%d",result);
    }
    else{
        printf("Enter two number: ");
        scanf("%d%d",&a,&b);
        result=a+b;
        printf("\nresult=%d",result);
    }
}

void Sub(){
    int a,b;
    if(k){
        printf("\nEnter a number: ");
        scanf("%d",&a);
        result-=a;
        printf("\nResult=%d",result);
    }
    else{
        printf("\nEnter two number: ");
        scanf("%d%d",&a,&b);
        result=a-b;
        printf("\nresult=%d",result);
    }
}

void Mul(){
    int a,b;
    if(k){
        printf("\nEnter a number: ");
        scanf("%d",&a);
        result*=a;
        printf("\nResult=%d",result);
    }
    else{
        printf("\nEnter two number: ");
        scanf("%d%d",&a,&b);
        result=a*b;
        printf("\nresult=%d",result);
    }
}

void Div(){
    int a,b;
    if(k){
        printf("\nEnter a number: ");
        scanf("%d",&a);
        result/=a;
        printf("\nResult=%d",result);
    }
    else{
        printf("\nEnter two number: ");
        scanf("%d%d",&a,&b);
        result=a/b;
        printf("\nresult=%d",result);
    }
}
void Rim(){
    int a,b;
    if(k){
        printf("\nEnter a number: ");
        scanf("%d",&a);
        result%=a;
        printf("\nResult=%d",result);
    }
    else{
        printf("\nEnter two number: ");
        scanf("%d%d",&a,&b);
        result=a%b;
        printf("\nresult=%d",result);
    }
}
void Clear(){
    printf("\nOld Data Cleared");
    result=0;
    k=0;
}

void main(){
    int l=0;
    while(1){
        printf("\n       Old Result=%d\n",result);
        switch(menu()){
            case 1:Add();
                   k=1;
                   break;
            case 2:Sub();
                   k=1;
                   break;
            case 3:Mul();
                   k=1;
                   break;
            case 4:Div();
                   k=1;
                   break;
            case 5:Rim();
                   k=1;
                   break;
            case 6:Clear();
                   break;
            case 7:l=1;
                   break;
            default:
                printf("Invalid choice Entered By You\n");
        }
        if(l==1){
            break;
        }
        getch();
    }
}