#include<iostream>
#include<queue>
#include<bits/stdc++.h> 
using namespace std;



struct node
{
   int data;
   node * left;
   node * right;
   node(int key){
	   data =key;
	   left = right = NULL;
   }
};

void print_tree(node *root){
    if(root != NULL) {
        print_tree(root->left);
        cout << root->data << " ";
        print_tree(root->right);
    }
}

void inorder_print(node *node){
	if(node == NULL)
		return;
	if(node->left != NULL)
		inorder_print(node->left);
	cout << " " << node->data;
	if(node->left != NULL)
		inorder_print(node->right);
}
void insert_q(node *tt, int data)
{
	queue<node*> q;
	q.push(tt);

	while(!q.empty()){
		node *tmp = q.front();
		q.pop();

		if(tmp->left != NULL) q.push(tmp->left);
		else {
			tmp->left = new node(data);
			break;
		}
		if(tmp->right != NULL) q.push(tmp->right);
		else {
			tmp->right = new node(data);
			break;
		}


	}
}
node * insert(node * root, int value) {

    node *x = root;
    node *y = NULL;
    node *z = NULL;
    z = new node(value);
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
#if 0
	root = insert(root, 4);
	root = insert(root, 3);
	root = insert(root, 2);
	root = insert(root, 1);
	root = insert(root, 7);
    print_tree(root);
#else
	node *tmp;
	root = new node(1);
	insert_q(root, 2);
	insert_q(root, 3);
	insert_q(root, 4);
	insert_q(root, 5);
	insert_q(root, 2);

	inorder_print(root);
#endif
}
