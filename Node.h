#include <iostream>

class Node {

public:

	int data; // Value being stored
	Node* left; // Pointer to the left child
	Node* right; // Pointer to the  right child


	//Data member inilitilzed
	Node(int node_data);
	
	Node* search_node(int data, Node* node);
	Node* insert_node(int data, Node* node);
	Node* delete_node(int data_to_delete, Node* node);
	Node* traverse_tree(Node* node);
	Node* lift(Node* node, Node* node_to_delete);
};


