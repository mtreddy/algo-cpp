#include <iostream>
#include<malloc.h>
using namespace std;
struct Node{
    int data;
    struct Node *left;
    struct Node *right;
};

typedef struct Node Node;
class bTree{
    public:
        Node* newNode(int data);
        Node* node_insert(Node *node, int val);
        void node_delete(Node *node);
        void inOrder(Node *node);
        void preOrder(Node *node);
        void postOrder(Node *node);
};
Node* bTree::newNode(int data){
    Node *node = NULL;
    node = (Node *)malloc(sizeof(Node));
    node->left = NULL;
    node->right = NULL;
    node->data = data;
    return node;

}
Node *bTree::node_insert(Node *node, int val){
    // Find the node to insert 
    if(node != NULL) {
        if(val < node->data)
            node->left = node_insert(node->left, val);
        else
            node->right = node_insert(node->right, val);
    } else {
        node = newNode(val);
    }
    return node;
}
void bTree::node_delete(Node *node){
    return;
}
void bTree::inOrder(Node *node){
    if(node != NULL) {
        inOrder(node->left);
        cout << node->data << " " << endl;
        inOrder(node->right);
    }
    return;
}
void bTree::preOrder(Node *node){
    if(node != NULL) {
        cout << node->data << " " << endl;
        inOrder(node->left);
        inOrder(node->right);
    }
    return;
}
void bTree::postOrder(Node *node){
    if(node != NULL) {
        inOrder(node->left);
        inOrder(node->right);
        cout << node->data << " " << endl;
    }
    return;
}
string findPath(Node *root, int value){
    Node *tmp;
    tmp = root;
    string str;
    while(tmp){
        if(tmp->data < value){str+="R";tmp = tmp->right;}
        else{str+="L"; tmp=tmp->left;}
    }
    return str;
}

Node * lca(Node * root, int v1,int v2)
{
    if(root == NULL)
        return root;
    string str1, str2;
    str1 = findPath(root, v1);
    str2 = findPath(root, v2);
    cout << str1 << endl;
    cout << str2 << endl;
     Node *tmp=root;
    string::iterator i=str1.begin(),j=str2.begin();
    if(*i == "" || *j == "")
        return root;

    while(*i == *j){
        i++;
        j++;
        if(*i == 'R') {tmp=tmp->right;}
        else{tmp=tmp->left;}
    }
    return tmp;
}

int main(){
    class bTree bt;
    Node *root=NULL;
    root = bt.newNode(30);
    bt.node_insert(root, 25);
    bt.node_insert(root, 35);
    bt.node_insert(root, 20);
    bt.node_insert(root, 40);
    bt.node_insert(root, 41);
    bt.node_insert(root, 36);
    cout << "in order traversal" << endl;
    bt.inOrder(root);
    cout << "pre order traversal" << endl;
    bt.preOrder(root);
    cout << "post order traversal" << endl;
    bt.postOrder(root);
    lca(root,41,36);
}
