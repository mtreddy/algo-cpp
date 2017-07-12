#include <iostream>
#include <cstddef>

using namespace std;	

class Node{
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d){
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            }
            else {
                Node* cur;
                if(data <= root->data){
                    cur = insert(root->left, data);
                    root->left = cur;
                }
                else{
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }
/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
	int hmax = 0, h=0;
    int height(Node* root) {
        // Write your code here.
        
        if(root!=NULL){
            if(root->left){ h +=1; if(h>hmax){hmax=h;} height(root->left);}
            if(root->right){ h +=1; if(h>hmax){hmax=h;} height(root->right);}
		    cout << " hmax " << hmax << " h " << h << " data " << root->data << endl;
            h -=1;
        }
		cout << hmax << " ";
        return hmax;
    }
};

int main() {
    Solution myTree;
    Node* root = NULL;
    int t;
    int data;

	int arr[] = {15, 1,3,2,5,4,6,7,9,8,11,13,12,10,15,14};
	int i = 0;
    while(i < sizeof(arr)/sizeof(int)){
        root = myTree.insert(root, arr[i]);
		i++;
    }
    int height = myTree.height(root);
	cout <<endl;
    cout << height;
	cout <<endl;

    return 0;
}

