#include<stdio.h>
#include<stdlib.h> //NESSECARRY HEADER FILE FOR USING rand() FUNCTION IN C/C++ ------------>1
#include<time.h>   //NESSECSRRY HEADER FILE TO GET NEW RANDOM VALUE AT EVERY SECOND ------->2

int main(){
    printf("HELLO I AM YASH PANDEY\n");
    printf("LET's PLAY A GAME WHERE YOU HAVE TO GUESS A NUMBER GENERATED BY COMPUTER\n");
    int number,guess,s=1;
    srand(time(0)); //WE USE THIS BECAUSE OF 2 WHICH WILL PROVIDE US DIFFERENT RANDOM VALUE AT EVERY NEW SECOND
    number = rand()%100 + 1; //WILL GENERATE RANDOM VALUE BETWEEN 1 TO 100 AND NEW VALUE AT EVERY NEW SECOND
    do{
        printf("GUESS A NUMBER BETWEEN 1 TO 100 ::: ");
        scanf("%d",&guess);
        if(guess>number){
            printf("LOWER NUMBER THAN %d !!!\n",guess);
        }
        else if(guess<number){
            printf("HIGHER NUMBER THAN %d !!!\n",guess);
        }
        else{
            printf("\n");
            printf("CONGRATULATIONS YOU GUESSED %d WHICH IS THE CORRECT NUMBER\n",number);
            printf("YOU GUESSED NUMBER %d IN ::: %d ATTEMPTS\n",number,s);
        }
        s++;
    }while(guess!=number); //DO WHILE LOOP WILL RUN ATLEAST ONCE WHEREAS "for" & "while" LOOP WILLN'T....
    printf("\n");
    printf("HOPE YOU UNDERSTOOD THE CONCEPT\n");
    printf("THANKYOU FOR USING ME\n");
    return 0;
}