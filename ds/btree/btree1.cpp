#include<iostream>

using namespace std;


typedef struct node
{
   int data;
   node * left;
   node * right;
}node;

void print_tree(node *root){
    if(root != NULL) {
        print_tree(root->left);
        cout << root->data << " ";
        print_tree(root->right);
    }
}
node * insert(node * root, int value) {

    node *x = root;
    node *y = NULL;
    node *z = NULL;
    z = new node;
    z->data=value;
    x = root;
    y = x;
    while(x!=NULL){
        y = x;
        if(x->data > value){x=x->left;}
        else { x=x->right; }
    }
    if(y==NULL){root=z;}
    else if(y->data > value){y->left=z;}
    else {y->right = z;}

   return root;
}

int main() {
    node *root = NULL;
	root = insert(root, 4);
	root = insert(root, 3);
	root = insert(root, 2);
	root = insert(root, 1);
	root = insert(root, 7);
    print_tree(root);
}
