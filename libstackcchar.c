#include "stack_char.h"

#include "mylib.h"

#include<malloc.h>

#include<stdlib.h>

#include<math.h>


struct stack* createStack(int capacity){

    struct stack *s = (struct stack*)malloc(sizeof(struct stack*));
    s->elements=malloc(sizeof(char)* s->capacity);
    s->top=-1;
    s->capacity=capacity;
    s->space_requests=0;
    s=(s==NULL || s->elements==NULL)?NULL:s;
    return s;

}


int checkRequests(struct stack*mystack){


    return mystack->space_requests;
}


void push(struct stack*s,char item){

    if(s->top==s->capacity-1){

       logm(" ERROR 12:STACK IS ALREADY FULL");
    }else{

    s->top=s->top+1;
    s->elements[s->top]=item;
     logm(" WOAH:PUSH SUCCESS");

    }



}



char peek(struct stack*s){


    if(s->top!=-1){
             logm("PEEK SUCCESS");
           return s->elements[s->top];

    }else{

        logm("ERROR 13: ERROR AT PEEKING :NOT ABLE TO RETRIEVE ");
        return '\0';

    }


}




char pop (struct stack*s){

    if(s->top==-1){

        logm("ERROR 104 :CAN NOT POP STACK IS EMPTY");
        return '\0';
    }else{


        char topmost = s->elements[s->top];
        s->top-=1;
        return topmost;


    }


}


void delStack(struct stack*s){

        if(s){

                if(s->elements){

                    free(s->elements);

                }

                free(s);

        }




}

int isEmpty(struct stack*mystack){

    return (mystack->top==-1);
}

int isFull(struct stack*mystack ){


    return (mystack->top==(mystack->capacity)-1);


}

int haveSpace(struct stack*mystack){


    return (mystack->top>=-1 && mystack->top!=(mystack->capacity)-1);

}


void dynamic_push(struct stack*mystack,char element){

    if(haveSpace(mystack))
    {
        mystack->top+=1;
        mystack->elements[mystack->top]=element;
        logm("PUSH IN STACK SUCESS!");

    }
    else if(!haveSpace(mystack)){
        mystack->capacity+=1;
        mystack->elements=realloc(mystack->elements,mystack->capacity*sizeof(char));
        mystack->space_requests+=1;
        mystack->top+=1;
        mystack->elements[mystack->top]=element;

        logm("PUSH IN STACK SUCESS!");

    }else{

        logm("PUSH IN STACK FAILED!");


    }



}


void dynamic_push_better(struct stack*mystack,char element){



if(haveSpace(mystack))
    {
        mystack->top+=1;
        mystack->elements[mystack->top]=element;
        logm("PUSH IN STACK SUCESS!");

    }
    else if(!haveSpace(mystack)){
        mystack->capacity=mystack->capacity*2;
        mystack->elements=realloc(mystack->elements,mystack->capacity*sizeof(char));
        mystack->space_requests+=1;
        mystack->top+=1;
        mystack->elements[mystack->top]=element;

        logm("PUSH IN STACK SUCESS!");

    }else{

        logm("PUSH IN STACK FAILED!");


    }















}




