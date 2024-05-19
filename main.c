#include <stdio.h>
#include <stdlib.h>
#include "libarr.h"
#include<malloc.h>
#include "double_linked_list.h"

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

    print_double_linked_list(head,1);

    return 0;
}
