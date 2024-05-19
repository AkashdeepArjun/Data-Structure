#include "stack_char.h"
#include<string.h>
#include<stdio.h>
char* testBraces(char*,int);

int main(){


    logm("WELCOME TO STACK DATA STRUCTURE ");
// TODO (dell#1#):

//    struct stack*mystack = createStack(1);




    char*exp="((((a+b))))";

    char*anser =testBraces(exp,strlen(exp));

    logm(anser);


    return 0;
}


char* testBraces(char*string,int size){

    struct stack*mystack = createStack(size);
    char*res="not balanced";
    int status=0;
    for(int ptr=0;ptr<size;ptr++)
    {
        if(string[ptr]=='('){
              logm("PUSHING LEFT PARANTHESIS");
            push(mystack,string[ptr]);

           }
        else if(string[ptr]==')'){


            if(isEmpty(mystack)){
                status=-1;
                break;
            }else{
                 char item=pop(mystack);
                logm("POPPED LEFT PERANTHESES SUCCESSFULLY");

                //continue;
            }


        }else{

           // continue;
        }
    }

  if(isEmpty(mystack) && status==0){
    res="yes balanced";
  }else{

    res="not balanced";
    }


    return res;
}
