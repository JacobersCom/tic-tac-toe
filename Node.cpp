#include "Node.h"


Node<T>::Node(T node_data) : data(node_data), left(nullptr), right(nullptr) {}

Node<T>* Node::search_node(T* data, node* node)
{
	if (node == nullptr || node->data == data)
	{
		return node;
	}
	else if (data < node->data) {
		
		return search_node(data, node->left);
	}
	else if (data > node->data) {

		return search_node(data, node->right);
	}
	
	return node;
	
}

Node* Node::insert_node(int data, Node* node)
{
	if (data < node->data)
	{
		if (node->left == nullptr)
		{
			node->left = new Node(data);
		}
		else
		{
			insert_node(data, node->left);
		}
	}
	if (data > node->data)
	{
		if (node->right == nullptr)
		{
			node->right = new Node(data);
		}
		else
		{

			insert_node(data, node->right);
		}
	}
	return node;
}

Node* Node::delete_node(int data_to_delete, Node* node)
{
	if (node == nullptr) {
		
		return node;
	}
	if (data < node->data) {
	
		node->left = delete_node(data, node->left);
		return node;
	}
	else if (data > node->data)
	{
		node->right = delete_node(data, node->right);
		return node;
	}
	if (data == node->data) 
	{	

		if (node->left == nullptr) {
			return node->right;
		}
		else if (node->right == nullptr)
		{
			return node->left;
		}
		else
		{
			node->right = lift(node->right, node);
			return node; 
		}
	}
	return node;
}

Node* Node::lift(Node* node, Node* node_to_delete)
{
	
	if (node->left)
	{
		node->left = lift(node->left, node_to_delete);
		return node;
	}
	else
	{
		node_to_delete->data = node->data;
		return node->right;
	}
}

Node* Node::traverse_tree(Node* node)
{
	if (node == nullptr)
	{
		return node;
	}
	traverse_tree(node->left);
	std::cout << node->data << std::endl;
	traverse_tree(node->right);
}
