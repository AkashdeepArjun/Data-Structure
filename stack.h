#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED




struct stack{

int capacity;
int top;
int * elements;
int space_requests;

};



#endif // STACK_H_INCLUDED


int pop (struct stack*);

int peek(struct stack*);


void push(struct stack*,int);


void delStack(struct stack*);
