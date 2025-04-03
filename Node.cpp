#include "Node.h"


Node::Node(int node_data)
{
	left = nullptr;
	right = nullptr;
	data = node_data;
}

Node* Node::search_node(int node_data, Node* node)
{
	// --- Is this the data you are looking for? ---
	if (node == nullptr || node->data == node_data)
	{
		return node;
	}
	else if (node_data < node->data) {
		
		// --- Searches left side of tree ---
		return search_node(node_data, node->left);
	}
	else if (node_data > node->data) {
		
		// --- Searches right side of tree ---
		return search_node(node_data, node->right);
	}
	
	return node;
	
}

Node* Node::insert_node(int node_data, Node* node)
{
	// --- Is the less than the root ---
	if (node_data < node->data)
	{
		// --- Is there a node already there ---
		if (node->left == nullptr)
		{
			// --- No? Put a new node there ---
			node->left = new Node(node_data);
		}
		else
		{
			// --- Look for a empty space in the left subtree --- 
			insert_node(node_data, node->left);
		}
	}
	// --- Is the data less than root? ---
	if (node_data > node->data)
	{
		// --- Is there a node already here ---
		if (node->right == nullptr)
		{
			// --- No? Put a new node there ---
			node->right = new Node(node_data);
		}
		else
		{
			// --- Look down the right subtree ---
			insert_node(node_data, node->right);
		}
	}
	return node;
}

Node* Node::delete_node(int data_to_delete, Node* node)
{
	// --- base case ---
	if (node == nullptr) {
		
		return node;
	}
	if (data_to_delete < node->data) {
		
		// --- Looking down the left subtree ---
		node->left = delete_node(data_to_delete, node->left);
		return node;
	}
	else if (data_to_delete > node->data)
	{
		// --- Looking down the right subtree ---
		node->right = delete_node(data_to_delete, node->right);
		return node;
	}
	// --- HHAHA I FOUND YOU ---
	if (data_to_delete == node->data)
	{	
		// --- If node has one child ---
		if (node->left == nullptr) {
			return node->right;
		}
		else if (node->right == nullptr)
		{
			return node->left;
		}
		else
		{
			// --- If node has two childs ---
			node->right = lift(node->right, node);
			return node; 
		}
	}
	return node;
}

Node* Node::lift(Node* node, Node* node_to_delete)
{
	// --- Searching for a node to overwrite the parent node ---
	if (node->left)
	{

		node->left = lift(node->left, node_to_delete);
		return node;
	}
	else
	{
		// --- Overwrite node with right child ---
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
