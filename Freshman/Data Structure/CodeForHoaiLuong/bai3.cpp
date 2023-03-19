#include <iostream>
using namespace std;

struct node {
    char key;
    struct node* left;
    struct node* right;
};
typedef node* NODEPTR;

NODEPTR root

void CreateEmptyTree(){
	root = NULL
}

NODEPTR newNode(char x){
	NODEPTR node = new NODEPTR
	if(node==NULL)
    {
		exit(1);
	}else{
		node->key = x;
		node->left = NULL
		node->right = NULL;
	}
	return node
}

NODEPTR insertNode(NODEPTR node, char value){
	if(node!=NULL){
		if(node->key == value){
			return node;
		}else if(node->key > value){
			node->left = insertNode(node->left, value);
		}else{
	

