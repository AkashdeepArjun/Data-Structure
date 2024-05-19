
#include "CLL.h"
#include<stdlib.h>
#include<malloc.h>


struct circular_linked_list* initCll(){

struct circular_linked_list*head=(struct circular_linked_list*)malloc(sizeof(struct circular_linked_list*));


return head;



};


void printCll(struct circular_linked_list*head){
    struct circular_linked_list*ptr=head;
    do{
        printf("%d  =>",ptr->data);
        ptr=ptr->next;

    }while(ptr->next!=head);

    if(ptr->next==head){
        printf("%d => ....%d",ptr->data,ptr->next->data);
    }

}


struct circular_linked_list* append(struct circular_linked_list*head,int data)
{

    struct circular_linked_list*newNode=initCll();
    newNode->data=data;

    struct circular_linked_list*tracker=head;

    while(tracker->next!=head){

        tracker=tracker->next;



    }

    tracker->next=newNode;
    newNode->next=head;

return head;
}


struct circular_linked_list* insAtBeg(struct circular_linked_list*head,int data){


    struct circular_linked_list*newNode=initCll();
    newNode->data=data;

    struct circular_linked_list*tracker=head;

    while(tracker->next!=head){

        tracker=tracker->next;



    }
    newNode->next=head;
    head=newNode;
    tracker->next=head;

    return head;
}

struct circular_linked_list* trimAtBeg(struct circular_linked_list*head){

        struct circular_linked_list*tracker=head;
        while(tracker->next!=head){
            tracker=tracker->next;
        }
        head=head->next;
        tracker->next=head;

        return head;


}


struct circular_linked_list* trimAtEnd(struct circular_linked_list*head){

    struct circular_linked_list*prev_tracker=NULL;
    struct circular_linked_list*curr_tracker=head;

    while(curr_tracker->next!=head){

        prev_tracker=curr_tracker;
        curr_tracker=curr_tracker->next;


    }

    prev_tracker->next=curr_tracker->next;

    free(curr_tracker);
    return head;

}
