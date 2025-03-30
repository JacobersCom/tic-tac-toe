#include "Node.h"


Node::Node(int node_data)
{
	left = nullptr;
	right = nullptr;
	data = node_data;
}

Node* Node::search_node(int data, Node* node)
{
	// Check wither node is nullptr or has the data 
	// we are looking for 
	if (node == nullptr || node->data == data)
	{
		return node;
	}
	else if (data < node->data) {
		
		// performing a recurive call if the data is less
		// than the data stored in the current noded search 
		// through the left tree
		
		return search_node(data, node->left);
	}
	else if (data > node->data) {
		
		// performing a recurive call if the data is less
		// than the data stored in the current noded search 
		// through the right tree

		return search_node(data, node->right);
	}
	
	return node;
	
}

Node* Node::insert_node(int data, Node* node)
{
	// check wither the value is less than the root
	if (data < node->data)
	{
		// check if root hads a child node
		if (node->left == nullptr)
		{
			// If root doesnt have a left child 
			// create a left child

			node->left = new Node(data);
		}
		else
		{
			// else perform a recirsive call to search for 
			// a empty spot within the tree
			insert_node(data, node->left);
		}
	}
	// check wither the value is less than the root
	if (data > node->data)
	{
		// check if root hads a child node
		if (node->right == nullptr)
		{
			// If root doesnt have a left child 
			// create a left child

			node->right = new Node(data);
		}
		else
		{
			// else perform a recirsive call to search for 
			// a empty spot within the tree

			insert_node(data, node->right);
		}
	}
	return node;
}

Node* Node::delete_node(int data_to_delete, Node* node)
{
	//Base case so the function doesnt call on its self forever
	if (node == nullptr) {
		
		return node;
	}
	if (data < node->data) {
		
		// Nothing is being overwritten here
		// We are calling deletion to check if this is the node we are looking 
		// for. if not the function we call on its self till it founds the 
		// Node we are looking for.

		node->left = delete_node(data, node->left);
		return node;
	}
	else if (data > node->data)
	{
		// Nothing is being overwritten here
		// We are calling deletion to check if this is the node we are looking 
		// for. if not the function we call on its self till it founds the 
		// Node we are looking for.

		node->right = delete_node(data, node->right);
		return node;
	}
	if (data == node->data) 
	{	
		// Checking if the current node is the one we want to 
		// delete

		// Running another check for a left and right child.
		// Which node is returned will become the pervious node
		// left or right child

		if (node->left == nullptr) {
			return node->right;
		}
		else if (node->right == nullptr)
		{
			return node->left;
		}
		else
		{
			// Here we call a function called lift which takes the 
			// node we want to use to replce the node we want to delete
			node->right = lift(node->right, node);
			return node; 
		}
	}
	return node;
}

Node* Node::lift(Node* node, Node* node_to_delete)
{
	// if its a left node in the right subtree
	if (node->left)
	{
		// preform a recurive call to find the smallest node
		// in the right subtree
		node->left = lift(node->left, node_to_delete);
		return node;
	}
	else
	{
		// if its not a left node set the current node to the one
		// we want to delete and overwrite it with the right child
		// of the current node
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
