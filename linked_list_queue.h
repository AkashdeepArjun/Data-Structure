#ifndef LINKED_LIST_QUEUE_H_INCLUDED
#define LINKED_LIST_QUEUE_H_INCLUDED


struct QueueNode{

    int data;

    struct QueueNode*next;

};


struct QueueLinkedList{

    struct QueueNode*FRONT;
    struct QueueNode*REAR;


};


#endif // LINKED_LIST_QUEUE_H_INCLUDED
