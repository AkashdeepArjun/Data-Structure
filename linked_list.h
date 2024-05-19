#ifndef LINKED_LIST_H_INCLUDED
#define LINKED_LIST_H_INCLUDED

struct linked_list{

    int data;
    struct linked_list*next;

};

struct linked_list* create_linked_list_node();
void print_linked_list(struct linked_list*);

struct linked_list* insertAtBeg(struct linked_list*,struct linked_list*);

struct linked_list* append(struct linked_list*,struct linked_list*);

struct linked_list* insertAtPos(struct linked_list*,int ,struct linked_list*);


// DELETION
struct linked_list*delAtBeg(struct linked_list*);
struct linked_list* delAtPos(struct linked_list*,int);



#endif // LINKED_LIST_H_INCLUDED
