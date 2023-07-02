	#include <iostream>
	#include <string>
	using namespace std;

	class Node
	{
	public:
		string info;
		Node* leftchild;
		Node* rightchild;

		// contractor for the node class
		Node(string i, Node* l, Node* r)
		{
			info = i;
			leftchild = l;
			rightchild = r;
		}
	};

	class BinaryTree
	{
	public:
		Node* ROOT;

		BinaryTree()
		{
			ROOT = NULL; // intializing ROOT to null
		}

		void insert(string element) //insert a node in the binary search tree
		{
			Node* newNode = new Node(element, NULL, NULL);
			newNode->info = element;
			newNode->leftchild = NULL;
			newNode->rightchild = NULL;

			Node* parent = NULL;
			Node* currentNode = NULL;
			search(element, parent, currentNode);

			if (parent == NULL)
			{
				ROOT = newNode;
				return;
			}

			if (element < parent->info)

			{
				parent->leftchild = newNode;
			}
			else if (element > parent->info)
			{
				parent->rightchild = newNode;
			}
		}

