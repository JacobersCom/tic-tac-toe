#pragma once


class Node
{
public: 

	char* data;
	Node* left;
	Node* right;

	Node(char* node_data);
	Node* search_node(char* data, Node* node);
	Node* insert_node(char* data, Node* node);
	Node* delete_node(char* data, Node* node);
	Node* lift(Node* node, Node* node_to_delete);
	Node* traverse_tree(Node* node);
};