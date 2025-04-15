#pragma once

template<typename T>
class Node
{
public: 

	T* data;
	Node* left;
	Node* right;

	Node(T* node_data) : data(node_data) {}
	Node<T>* search_node(T* node_data, Node* node);
	Node<T>* insert_node(T* data, Node* node);
	Node<T>* delete_node(T* data_to_delete, Node* node);
	Node<T>* lift(Node* node, Node* node_to_delete);
	Node<T>* traverse_tree(Node* node);
};