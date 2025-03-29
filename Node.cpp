#include "Node.h"

Node* Node::search(int data, Node* node)
{
	
	if (node == nullptr || node->data == data)
	{
		return node;
	}
	else if (data < node->data) {
		
		return search(data, node->left);
	}
	else if (data > node->data) {
		
		return search(data, node->right);
	}
	
}
