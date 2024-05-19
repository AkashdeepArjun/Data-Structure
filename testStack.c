#include<stdlib.h>

#include "mylib.h"

#include<stdio.h>


int main(){

struct stack*mystack = createStack(0);

struct stack*mystack2 = createStack(0);

logm("PUSHING ELEMENT IN FIRST STACK");


for(int i =1;i<=4;i++){


    dynamic_push(mystack,i);


}

logm("PUSHING ELEMENT IN SECOND  STACK");

for(int J =1;J<=4;J++){


    dynamic_push_better(mystack2,J);


}






printf("REQUESTS MADE IN FIRST STACK :%d",checkRequests(mystack));


printf("REQUESTS MADE IN SECOND STACK :%d",checkRequests(mystack2));


return 0;


}
