//958.cpp

#include <iostream>

using namespace std;

class Node{
public:
	int data;
	Node* left;
	Node* right;
};

void inOrderTraversal(Node* node){
	if(node==NULL) return;
	inOrderTraversal(node->left);
	cout << node->data << " " << endl;
	inOrderTraversal(node->right);
}

Node* newNode(int data){
	Node* new_node = new Node();
	new_node->data = data;
	new_node->left = NULL;
	new_node->right = NULL;
	return new_node;
}
int main(){
	Node* root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->right = newNode(4);
	inOrderTraversal(root);
	
}
