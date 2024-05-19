#include<malloc.h>
#include<stdio.h>
#include "double_linked_list.h"
#include "mylib.h"

struct double_linked_list* init_double_linked(){


     struct double_linked_list*head=(struct double_linked_list*)malloc(sizeof(struct double_linked_list*));
     head->prev=NULL;
     head->next=NULL;
     return head;


}
void printDllf(struct double_linked_list*head){

    struct double_linked_list*ptr=head;
    while(ptr!=NULL){
        if(ptr->next!=NULL){
            printf("%d =>",ptr->data);
        }else{

            printf("%d=>NULL",ptr->data);
        }
        ptr=ptr->next;
    }


printf("\n");

}


void printDllb(struct double_linked_list*node){

    struct double_linked_list*ptr=node;
    while(ptr!=NULL){
        if(ptr->prev!=NULL){
            printf("%d =>",ptr->data);
        }else{

            printf("%d=>NULL",ptr->data);
        }
        ptr=ptr->prev;
    }


printf("\n");

}

struct double_linked_list* insAtBeg(struct double_linked_list *head,int newdata){

//struct double_linked_list*temp=head;

struct double_linked_list*newNode=init_double_linked();
newNode->data=newdata;
newNode->prev=NULL;
newNode->next=head;
head->prev=newNode;
return newNode;

}

struct double_linked_list* insAtPos(struct double_linked_list*head,int pos,int data){

    if(pos==1){

        return insAtBeg(head,data);

    }

    else{
         struct double_linked_list*newNode=(struct double_linked_list*)malloc(sizeof(struct double_linked_list*));

        newNode->data=data;
        int cursor=1;
        struct double_linked_list*ptr=head;
        while(cursor!=pos && ptr->next!=NULL){
            ptr=ptr->next;
            cursor++;
        }

    if(cursor!=pos && ptr->next==NULL){
            //AFTER LAST ELEMENT

        newNode->next=NULL;
        newNode->prev=ptr;
        ptr->next=newNode;
    }else {

            //middle position

        newNode->prev=ptr->prev;
        newNode->next=ptr;
        (ptr->prev)->next=newNode;
        ptr->prev=newNode;
    }

    return head;

    }

}


struct double_linked_list* delAtBeg(struct double_linked_list*head){


    head=(head->next);


    return head;



}



struct double_linked_list* delAtPos(struct double_linked_list*head,int pos)
{

    if(pos==1){

        return delAtBeg(head);
    }else {

        int pos_tracker=1;
        struct double_linked_list*item_tracker=head;

        while(pos_tracker!=pos && item_tracker->next!=NULL)
        {
            item_tracker=item_tracker->next;
            pos_tracker+=1;

        }

        if(pos_tracker!=pos && item_tracker->next==NULL)
        {

            log("position does not exist");
            return head;
        }else{


            (item_tracker->prev)->next =(item_tracker->next);

            item_tracker->prev=NULL;

            free(item_tracker);



        }

        return head;


    }



}





