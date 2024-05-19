#include "queue.h"
#include<stdlib.h>
#include<malloc.h>
#include "linked_list_queue.h"



struct queue* createQ(int capacity){

    struct queue*new_queue=(struct  queue*)malloc(sizeof(struct queue*));
    new_queue->capacity=capacity;
    new_queue->elements=malloc(capacity*sizeof(int));
    new_queue->occupied=0;
    new_queue->front=-1;
    new_queue->rear=-1;


    return (new_queue==NULL || new_queue->elements==NULL)?NULL:new_queue;

}


void enQ(struct queue*myqueue,int id_new_element){

    if(myqueue->occupied==myqueue->capacity){

        resizeQ(myqueue);

    }

        myqueue->rear=(myqueue->rear+1)%(myqueue->capacity);
        myqueue->elements[myqueue->rear]=id_new_element;
        myqueue->front=(myqueue->front==-1)?myqueue->rear:myqueue->front;
        myqueue->occupied+=1;
        logm("ENQUE SUCCESSS");




}
void deQ(struct queue*q){

if(q->occupied==0){

    logm("DEQUE FAILED!CAUSE:QUEUE IS ALREADY EMPTY");

}else{



    printf("\n processed:%d \n",q->elements[q->front]);

    if(q->front==q->rear){

    resetQ(q);


    }else{
      q->front=(q->front+1)%(q->capacity);
      q->occupied-=1;
    }

    logm("DEQUE SUCCESS");






}



}


void logQ(struct queue*myqueue){

    for(int index=0;index<myqueue->occupied;index++)
    {

       if(index==((myqueue->occupied)-1)){
            printf("%d",myqueue->elements[index]);

       }else{

         printf("%d =>",myqueue->elements[index]);


       }

    }

}
void resetQ(struct queue*q){

    q->front=-1;
    q->rear=-1;
    q->occupied=0;



}


int isQFull(struct queue*q){


    return (q->occupied==q->capacity);

}

int isQEmpty(struct queue*q){

    return (q->occupied==0);

}

void resizeQ(struct queue*q){

    q->capacity*=2;
    q->elements=realloc(q->elements,q->capacity*sizeof(int));
    if(q==NULL){
        logm("QUEUE SIZE FAILED TO EXPAND");
    }else{

        logm("QUEUE SIZE EXPANDED");

    }



}


struct QueueNode* createQnode(int data){



    struct QueueNode*node= (struct QueueNode*)malloc(sizeof(struct QueueNode*));

    node->data=data;
    node->next=NULL;


return node;

}


struct QueueLinkedList* createQll(){

    struct QueueLinkedList*q = (struct QueueLinkedList*)malloc(sizeof(struct QueueLinkedList*));

    q->FRONT=NULL;

    q->REAR=NULL;


    return q;


}

void EnqueLinkedList(struct QueueLinkedList*q,int data){

    struct QueueNode*newNode= createQnode(data);
    newNode->next=NULL;
    if(q->REAR==NULL){

        q->REAR=newNode;
        q->FRONT=q->REAR;

    }else{

        q->REAR->next=newNode;
        q->REAR=newNode;

    }

    logm("ENQUEE SUCCESS");
}

void logLinkedList(struct QueueLinkedList*q){

            logm("LOGGING LINKED LIST .......");
            struct QueueNode*tracker=q->FRONT;
            while(tracker!=NULL){

                if(tracker->next==NULL){

                    printf("%d",tracker->data);
                }else{

                     printf("%d=>",tracker->data);

                }



                tracker=tracker->next;
            }





}



void DequeLinkedList(struct QueueLinkedList*q){


    if(q->FRONT==NULL){

        logm("DEQUE FAILED !!! CAUASE:QUEUE EMPTY");
    }else{

        printf("processed %d",q->FRONT->data);
        if(q->FRONT==q->REAR){
            q->FRONT=NULL;
            q->REAR=NULL;
        }else{

                 q->FRONT=q->FRONT->next;

        }





        logm("DEQUE SUCCESS");
    }

}

