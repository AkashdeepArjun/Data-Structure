#include<malloc.h>
#include "linked_list.h"
#include<stdio.h>
struct linked_list* create_linked_list_node(){


    struct linked_list*head=(struct linked_list*)malloc(sizeof(struct linked_list*));


    return head;
}

void print_linked_list(struct linked_list*head){

    struct linked_list*ptr=head;

    while(ptr!=NULL){

    if(ptr->next!=NULL){

    printf(" %d => ",ptr->data);
    }else{

        printf(" %d => NULL",ptr->data);
    }
    ptr=ptr->next;
    }

    printf("\n");
    //free(ptr);


}

struct linked_list* insertAtBeg(struct linked_list*head,struct linked_list*new_node){

    (new_node->next)=head;
    return new_node;
}

struct linked_list* insertDataAtBeg(struct linked_list*head,int data){

    struct linked_list*newNode=(struct linked_list*)malloc(sizeof(struct linked_list));
    newNode->data=data;
    newNode->next=head;
   head=newNode;
    return head;

}

struct linked_list* append(struct linked_list*head,struct linked_list*new_node){
   struct linked_list*ptr=head;

   while(ptr->next!=NULL){

        ptr=ptr->next;

   }
        new_node->next=NULL;
       ptr->next=new_node;
    return head;
}

struct linked_list* insertAtPos(struct linked_list*head,int pos,struct linked_list*newNode){

            //start pos
    if(pos==1){

        return insertAtBeg(head,newNode);
    }else{


        int c=1;
        struct linked_list*prev=NULL;
        struct linked_list*ptr=head;
         //struct linked_list*temp=NULL;


        while(c!=pos && ptr!=NULL){
            prev=ptr;
            ptr=ptr->next;
            c++;

        }
                //LAST POS
                if(ptr==NULL){
                    prev->next=newNode;
                    newNode->next=NULL;
                }else{

                    newNode->next=prev->next;
                    prev->next=newNode;

                }


        }
        return head;




}

struct linked_list* delAtBeg(struct linked_list*head)
{
        struct linked_list*temp=head;
        head=head->next;

        return head;

}

struct linked_list* delAtPos(struct linked_list*head,int pos){

if(pos==1){

     return delAtBeg(head);


}else{

    int c=1;
    struct linked_list*prev=NULL;
    struct linked_list*ptr=head;

    while(c!=pos && (ptr!=NULL)){
        prev=ptr;
        ptr=ptr->next;
        c=c+1;


    }

            prev->next=ptr->next;

        free(ptr);

        return head;


}





}

