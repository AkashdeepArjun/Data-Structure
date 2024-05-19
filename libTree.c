#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include "mylib.h"

#include "Tree.h"

struct Tree* createNode(int d)
{

        struct Tree*new_node =(struct Tree*)malloc(sizeof(struct Tree*));

        new_node->data=d;
        new_node->left_child=NULL;
        new_node->right_child=NULL;

    return new_node;
}


void preOrder(struct Tree*root){

    if(root){

        printf(" PROCESSED :%d\n",root->data);

        inOrder(root->left_child);
        inOrder(root->right_child);


    }



}


void inOrder(struct Tree*root){


   if(root){



        inOrder(root->left_child);
        printf(" PROCESSED :%d\n",root->data);
        inOrder(root->right_child);


    }




}



void postOrder(struct Tree*root){




   if(root){



        inOrder(root->left_child);

        inOrder(root->right_child);


        printf(" PROCESSED :%d\n",root->data);

    }







}
