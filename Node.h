#include <iostream>

class Node {

public:

	int data; // Value being stored
	Node* left; // Pointer to the left child
	Node* right; // Pointer to the  right child


	//Data member inilitilzed
	Node();
	Node(int node_data, Node* node_left, Node* node_right);
	Node* search(int data, Node* node);
	Node* insert(int data, Node* node);
};


