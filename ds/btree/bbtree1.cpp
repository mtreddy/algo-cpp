#include<iostream>

using namespace std;


typedef struct node
{
   int val;
   node * left;
   node * right;
   int ht;
}node;

class bbtree{
    public:
    node *createNode(int val);
    void print_tree(node *root);
    node * insert(node * root, int value);
    int height(node *node);
    int bheight(node *node);
    int balance(node *node);
    node * rotate_left(node* x);
    node * rotate_right(node* y);
    node * binsert(node *node, int key);
};
node * bbtree::createNode(int val){
    node *z;
    z = new node;
    z->val = val;
    z->left = NULL;
    z->right = NULL;
    z->ht = 1;
    return z;

}
void bbtree::print_tree(node *root){
    if(root != NULL) {
        print_tree(root->left);
        cout << root->val << " ";
        print_tree(root->right);
    }
}
node * bbtree::insert(node * root, int value) {

    node *x = root;
    node *y = NULL;
    node *z = NULL;
    z = new node;
    z->val=value;
    x = root;
    y = x;
    while(x!=NULL){
        y = x;
        if(x->val > value){x=x->left;}
        else { x=x->right; }
    }
    if(y==NULL){root=z;}
    else if(y->val > value){y->left=z;}
    else {y->right = z;}

   return root;
}

int bbtree::height(node *node){
    int ht;
    if(node != NULL){
        ht = 1 + max(height(node->left), height(node->right));
    } else {
        return 0;
    }
    return ht;
}
int bbtree::bheight(node *node){
    if(node == NULL)
        return 0;
    return node->ht;
}

int bbtree::balance(node *node){
    return(height(node->left)-height(node->right));
}

node * bbtree::rotate_left(node* x){
    node *y = x->right;
    node *tmp = y->left;

    y->left = x;
    x->right = tmp;

    x->ht = max(height(x->left), height(x->right)) + 1;
    y->ht = max(height(y->left), height(y->right)) + 1;

    return y;

}
node * bbtree::rotate_right(node* y){
    node *x = y->left;
    node *tmp = x->right;

    x->right = y;
    y->left = tmp;
    x->ht = max(height(x->left), height(x->right)) + 1;
    y->ht = max(height(y->left), height(y->right)) + 1;
    return x;
}
node* bbtree::binsert(node *node, int key){
    /*Find place to insert*/
     if(node == NULL) 
         return (createNode(key));
     if(key < node->val) {
         node->left = binsert(node->left, key);
     }else if(key > node->val){
         node->right = binsert(node->left, key);
     }else{
         return node;
     }
    /*Find the height*/

    /*Get the balance factor*/

    /*Find rotate method*/
}
int main() {
    class bbtree bb;
    node *root = NULL;
	root = bb.insert(root, 4);
	root = bb.insert(root, 3);
	root = bb.insert(root, 2);
	root = bb.insert(root, 1);
	root = bb.insert(root, 7);
    bb.print_tree(root);
    cout << "\n";
    cout << "height" << bb.height(root);
    cout << "\n";
    cout << "balance" << bb.balance(root);
    cout << "\n";
    root = bb.rotate_right(root);
    bb.print_tree(root->left);
    cout << "\n";
    bb.print_tree(root->right);
    cout << "\n";
    root = bb.rotate_right(root);
    cout << "\n";
    bb.print_tree(root->left);
    cout << "\n";
    bb.print_tree(root->right);
    cout << "\n";
    cout << "\n";
    root = bb.rotate_left(root);
    cout << "\n";
    bb.print_tree(root->left);
    cout << "\n";
    bb.print_tree(root->right);
    cout << "\n";
}
