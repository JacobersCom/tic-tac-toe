#pragma once

template<typename node>
class Node
{
public: 

	node* data;
	node* left;
	node* right;

	Node(node* node_data);
	Node* search_node(node* data, Node* node);
	Node* insert_node(node* data, Node* node);
	Node* delete_node(node* data_to_delete, Node* node);
	Node* lift(Node* node, Node* node_to_delete);
	Node* traverse_tree(Node* node);
};
