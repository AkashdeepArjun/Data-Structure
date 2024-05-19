#include<stdlib.h>
#include "linked_list.h"
#include "mylib.h"

int main(){

struct linked_list*head=create_linked_list_node();
struct linked_list*item1=create_linked_list_node();
struct linked_list*item2=create_linked_list_node();
struct linked_list*item3=create_linked_list_node();
struct linked_list*item4=create_linked_list_node();



head->data=2;
item1->data=3;
item2->data=4;
item3->data=5;
item4->data=6;


head->next=item1;
item1->next=item2;
item2->next=item3;
item3->next=item4;
item4->next=NULL;

log("orignal data is ");
print_linked_list(head);

head=delAtBeg(head);

log(" DELETING THE HEAD  ");

print_linked_list(head);


log("DELETION  AT LAST POSITION");

head=delAtPos(head,4);

print_linked_list(head);


log("DELETION AT MIDDLE POSITION");


head=delAtPos(head,2);

print_linked_list(head);

return 0;
}
