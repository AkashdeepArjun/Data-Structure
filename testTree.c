#include<stdlib.h>
#include "Tree.h"

int main(){



printf("hi lol");

logm("CREATING TREE WITH VALUES 1,2,3");

struct Tree*root =createNode(1);

struct Tree*left =createNode(2);

struct Tree*right =createNode(3);


struct Tree*four =createNode(4);

struct Tree*five = createNode(5);

root->left_child=left;
root->right_child=right;

left->left_child=four;
left->right_child=five;

logm("USING PREORDER APPROACH TO TRAVERSE TREE");

preOrder(root);


logm("USING INORDER APPROACH TO TRAVERSE TREE");

inOrder(root);


logm("USING POSTORDER APPROACH TO TRAVERSE TREE");

postOrder(root);

return 0;
}
