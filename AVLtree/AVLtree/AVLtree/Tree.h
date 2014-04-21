#pragma once
#include <iostream>
#include <string>
using namespace std;
struct Node
{
	string value;
	int height;
	Node *less;
	Node *more;
	//Node(int v, int h, Node* l, Node* m) : value(v), height(h), less(l), more(m) {}
	//Node() :value(2), height(0), less(nullptr), more(nullptr){}
};
typedef struct node *nodeptr;

class Tree
{
public:
	
	
	Node* root;
	Tree();

	//inserts a node
	void Insert(Node**, int, string);
	
	//Balences tree
	Node* Check(Node*);
	void Adjust(Node**);
	
	//Print Methods
	void Inorder(Node **n);
	void Preorder(Node **n);
	void Postorder(Node **n);

	//Node Rotations
	//look at http://jvandeven.spsu.edu/classes/14/Spring14/CS3424-002/AVLTreeTutorial.htm
	void LL(Node**n);
	void RR(Node**n);
	void LR(Node**n);
	void RL(Node**n);
	
	//generates numeric hash to calculate value of strings.
	int hash(string);
	//Sets the hieghts of the nodes
	void Setheight(int, Node*);
	//finds the maximum hieght
	int Findmaxheight(Node*);
	//searches for words in the tree
	bool Search(string, Node*);
	//gets the size of the tree
	int size(Node*);
	//destroys tree
	void clear(Node*);
	
	~Tree();

};

