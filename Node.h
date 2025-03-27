#include <iostream>

class Node {
	
public:

	int data; // Value being stored
	Node* left; // Pointer to the left child
	Node* right; // Pointer to the  right child

	Node();

	Node* root_check(Node* root);
}


