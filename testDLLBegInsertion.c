#include <stdio.h>
#include <stdlib.h>
#include "libarr.h"
#include<malloc.h>
#include "double_linked_list.h"
#include "mylib.h"

int main()
{

    struct double_linked_list*head=init_double_linked();
    struct double_linked_list*item1=init_double_linked();
    struct double_linked_list*item2=init_double_linked();
    head->data=2;
    item1->data=3;
    item2->data=4;

    item1->prev=head;
    item2->prev=item1;

    head->next=item1;
    item1->next=item2;
    item2->next=NULL;

    log("ORIGNAL LINKED LIST IS ");

    printDllf(head);

    log("TEST BACKWARD TRAVERSE ");

    printDllb(item2);

    log("TEST INSERTION AT BEGINING");

    head=insAtBeg(head,8);
    printDllf(head);   //expected 8->2->3->4

    log("TEST INSERTION AT ANY POSITION");

    //head=insAtPos(head,88,15);
   // printDllf(head);    //expected 8->2->3->4->15  =>works

    head=insAtPos(head,199,15);

     printDllf(head);

    return 0;
}
