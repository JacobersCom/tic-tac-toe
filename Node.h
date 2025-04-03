#pragma once

class Node
{
	int data;
	Node* left;
	Node* right;

	Node* search_node(int data, Node* node);
	Node* insert_node(int data, Node* node);
	Node* delete_node(int data_to_delete, Node* node);
	Node* lift(Node* node, Node* node_to_delete);
	Node* traverse_tree(Node* node);
};
