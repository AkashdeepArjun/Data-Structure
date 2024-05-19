#include<stdlib.h>
#include "double_linked_list.h"
#include "mylib.h"

struct double_linked_list* createSampleDll();

int main(){


struct double_linked_list*head=createSampleDll();

log("ORIGINAL LINKED LISYT IS");

printDllf(head);

log("DELETING ITEM AT FIRST POSITION");

head= delAtBeg(head);

printDllf(head);

free(head);
head=createSampleDll();     //RESETTING DATA

log("DELETING ITEM AT LAST POSITON");

head=delAtPos(head,4);

printDllf(head);


log("DELETING ITEM AT MIDDLE POSITION");
free(head);

head=createSampleDll();

head=delAtPos(head,47);

printDllf(head);

return 0;
}







struct double_linked_list* createSampleDll(){

    struct double_linked_list*head=init_double_linked();
    struct double_linked_list*item1=init_double_linked();
    struct double_linked_list*item2=init_double_linked();
    struct double_linked_list*item3=init_double_linked();

    head->prev=NULL;
    head->data=2;
    head->next=item1;


    item1->prev=head;
    item1->data=3;
    item1->next=item2;


    item2->prev=item1;
    item2->data=4;
    item2->next=item3;


    item3->prev=item2;
    item3->data=5;
    item3->next=NULL;


    return head;


};
