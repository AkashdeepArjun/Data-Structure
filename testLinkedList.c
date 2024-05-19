#include<stdlib.h>
#include<conio.h>
#include "linked_list.h"
#include "mylib.h"
int main(){


    struct linked_list*head=create_linked_list_node();
    struct linked_list*item1=create_linked_list_node();
    struct linked_list*item2=create_linked_list_node();
    struct linked_list*item3=create_linked_list_node();

    printf("\n WELCOME BACK TO CODING MR AKASHDEEP\n");

    head->data=11;
    item1->data=12;
    item2->data=13;
    item3->data=14;

    head->next=item1;
    item1->next=item2;
    item2->next=item3;
    item3->next=NULL;

    log("TESTING TRAVERSING OF LINKED LIST");
    print_linked_list(head);

    log(" TESTING INSERTION OF NUMBER 10 AT BEGINING");

    head=insertDataAtBeg(head,10);
    print_linked_list(head);

    log(
        "TESTING APPENDING ");

    struct linked_list*ni=create_linked_list_node();
    ni->data=786;

    head=insertAtPos(head,7,ni);
    print_linked_list(head);


    return 0;
}



