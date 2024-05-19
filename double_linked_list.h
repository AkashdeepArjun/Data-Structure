#ifndef DOUBLE_LINKED_LIST_H_INCLUDED
#define DOUBLE_LINKED_LIST_H_INCLUDED


struct double_linked_list{

    struct double_linked_list*prev;
    int data;
    struct double_linked_list*next;

};

struct double_linked_list* init_double_linked();

void printDllf(struct double_linked_list*);


void printDllb(struct double_linked_list*);



//INSERTIONS

struct double_linked_list* insAtBeg(struct double_linked_list*,int);

#endif // DOUBLE_LINKED_LIST_H_INCLUDED
