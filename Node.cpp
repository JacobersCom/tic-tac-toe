#include "Node.h"

Node::Node()
{}

Node::Node(int node_data, Node* node_left, Node* node_right)
	: data(node_data), left(node_left), right(node_right)
{}

Node* Node::search(int data, Node* node)
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
		
		return search(data, node->left);
	}
	else if (data > node->data) {
		
		// performing a recurive call if the data is less
		// than the data stored in the current noded search 
		// through the right tree

		return search(data, node->right);
	}
	
	return node;
	
}

Node* Node::insert(int data, Node* node)
{
	// check wither the value is less than the root
	if (data < node->data)
	{
		// check if root hads a child node
		if (node->left == nullptr)
		{
			// If root doesnt have a left child 
			// create a left child

			node->left = new Node();
		}
		else
		{
			// else perform a recirsive call to search for 
			// a empty spot within the tree
			insert(data, node->left);
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

			node->right = new Node();
		}
		else
		{
			// else perform a recirsive call to search for 
			// a empty spot within the tree

			insert(data, node->right);
		}
	}
}
