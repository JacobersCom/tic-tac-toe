#include <iostream>
#include "gameBroad.h"



gameBroad board;

int main() {

	/*board.Menu();
	board.gamePlayLoop();*/

	Node* root = new Node(10);
	root->left = new Node(5);
	root->right = new Node(20);
	Node* temp = root->left;
	node.traverse_tree(root);

}

