#include<stdlib.h>
#include "mylib.h"
#include "double_linked_list.h"

int main()
{
        struct double_linked_list*head=init_double_linked();
        struct double_linked_list*item1=init_double_linked();
        struct double_linked_list*item2=init_double_linked();
        struct double_linked_list*item3=init_double_linked();
        struct double_linked_list*item4=init_double_linked();

                            //SETTING UP DATA
                head->data=2;
                item1->data=3;
                item2->data=4;
                item3->data=5;
                item4->data=6;


                //  SETTING UP PREV

                head->prev=NULL;
                item1->prev=head;
                item2->prev=item1;
                item3->prev=item2;
                item4->prev=item3;


                    //SETTING UP NEXT


                    head->next=item1;
                    item1->next=item2;
                    item2->next=item3;
                    item3->next=item4;
                    item4->next=NULL;


        log("TEST FORWARD TRAVERSE");

        printDllf(head);

        log("TEST BACKWARD TRAVERSE");

        printDllb(item4);

        log("TEST INSERTION OF DATA 8 AT BEGINING");

        head=insAtBeg(head,8);

        printDllf(head);

        log("TEST INSERTION OF NUMBER 8 AT NEXT TO LAST POS");

        head=insAtPos(head,2,25);

        printDllf(head);



    return 0;
}
