#include<stdlib.h>
#include "mylib.h"
#include "CLL.h"


int main(){



struct circular_linked_list*head=initCll();

struct circular_linked_list*item1=initCll();

struct circular_linked_list*item2=initCll();

struct circular_linked_list*item3=initCll();


head->data=2;
item1->data=3;
item2->data=4;
item3->data=5;


head->next=item1;
item1->next=item2;
item2->next=item3;
item3->next=head;

printCll(head);

log("TESTING APPEND LOGIC AT CIRCULAR LINKED LIST");

head=append(head,6);

printCll(head);


log("TESTING INSERT AT BEGINING LOGIC ");

head = insAtBeg(head,1);

printCll(head);


log("TESTING DELETION AT BEGINING ");


head=trimAtBeg(head);

printCll(head);



log("TESTING  DELETION AT END");5

head=trimAtEnd(head);

printCll(head);
log("TESTING  DELETION AT END");

head=trimAtEnd(head);

printCll(head);

return 0;
}
