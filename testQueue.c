#include<stdlib.h>
#include "mylib.h"
#include "queue.h"


int main(){


    struct QueueLinkedList*q= createQll();

    EnqueLinkedList(q,4);
    EnqueLinkedList(q,5);
    EnqueLinkedList(q,6);
    EnqueLinkedList(q,7);


    logLinkedList(q);


    DequeLinkedList(q);
    DequeLinkedList(q);
    DequeLinkedList(q);
    DequeLinkedList(q);
     DequeLinkedList(q);



       EnqueLinkedList(q,4);
    EnqueLinkedList(q,5);
    EnqueLinkedList(q,6);
    EnqueLinkedList(q,7);



     DequeLinkedList(q);
    DequeLinkedList(q);
    DequeLinkedList(q);
    DequeLinkedList(q);


    return 0;


}
