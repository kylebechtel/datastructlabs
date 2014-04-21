#include "stdafx.h"
#include "Tree.h"

Tree::Tree()
{
	root;
}


//This method generates a binary tree
//int counter = 0;
void Tree::Insert(Node **n, int num, string s)
{
	
	if (*n == NULL) {
		
		*n = new Node();
		(*n)->value = s;
		(*n)->less = nullptr;
		(*n)->more = nullptr;
		(*n)->height = 0;
		Tree::Setheight(0, Tree::root);
		Tree::Adjust(&(Tree::root));
	}

	else {
		int comp = hash((*n)->value);

		if (num > comp){
			Insert(&((*n)->more), num, s);
		}
		else if (num < comp){
			Insert(&((*n)->less), num, s);
		}
		else if (num == comp)
		{
			if ((*n)->value != s)
			{
				Insert(&((*n)->more), num, s);
			}
			else{
				//counter++;
				//cout << counter << endl;
				//std::cout << "this number is already in the tree";
			}
		}
		else{
			std::cout << "insert method failed";
		}
	}
}

//Checks to see if the tree is unbalenced
//Node* Tree::Check(Node*n){
//	//TODO::here is one problem:
//	if (Findmaxheight(n) >= 2)
//			return n;
//		else{
//			if (n->less != nullptr)
//			Check(n->less);
//			if (n->more != nullptr)
//			Check(n->more);
//		}	
//}

int Tree::Findmaxheight(Node*n){
	if (n->more != nullptr){
		return Findmaxheight(n->more); 
	}
	if (n->less != nullptr){
		 return Findmaxheight(n->less); 
	}
	return n->height;
}

void Tree::Adjust(Node**n){
		
		//Node *n = Check(tmp);
		if (*n != nullptr){// && n->less!=nullptr && n->more!=nullptr){
			int left = 0, right = 0;
			if ((*n)->less != nullptr)
				left = Tree::Findmaxheight((*n)->less);
			if ((*n)->more != nullptr)
				right = Tree::Findmaxheight((*n)->more);
			
		if (right - left >= 2)// tree is right heavy
		{
			int rightleft = 0, leftright = 0;
			if ((*n)->more != nullptr && (*n)->more->less != nullptr)
				rightleft = Tree::Findmaxheight((*n)->more->less);
			if ((*n)->less != nullptr && (*n)->more->more != nullptr)
				leftright = Tree::Findmaxheight((*n)->more->more);

			if (rightleft - leftright >= 2)// tree's right subtree is left heavy
			{
				Tree::LR(&(*n));
			}
			else
			{
				Tree::LL(&(*n));
			}
		}
		else if (left - right >= 2) //tree is left heavy
		{
			int leftright = 0, leftleft = 0;
			if ((*n)->less != nullptr && (*n)->less->more != nullptr)
				leftright = Tree::Findmaxheight((*n)->less->more);
			if ((*n)->less != nullptr && (*n)->less->less != nullptr)
				leftleft = Tree::Findmaxheight((*n)->less->less);

			if (leftright - leftright >= 2)// tree's left subtree is right heavy
			{
				Tree::RL(&(*n));
			}
			else
			{
				Tree::RR(&(*n));
			}
		}
		if (&(*n)->less != nullptr)
		Adjust(&(*n)->less);
		if (&(*n)->more != nullptr)
		Adjust(&(*n)->more);
		}
}
void Tree::Inorder(Node **n){
	
	if ((*n) != NULL){

		Inorder(&((*n)->less));
		std::cout << (*n)->value << " ";
		Inorder(&((*n)->more));
		
	}
}

void Tree::Preorder(Node **n){

	if ((*n) != NULL){
		std::cout << (*n)->value << " ";
		Preorder(&((*n)->less));
		Preorder(&((*n)->more));
	}
}

void Tree::Postorder(Node **n){

	if ((*n) != NULL){
		Postorder(&((*n)->less));
		Postorder(&((*n)->more));
		std::cout << (*n)->value << " ";

	}
}

void Tree::LL(Node **n){
	if ((*n)->more != nullptr){
		Node *newRoot;
		Node *curRoot = *n;
		newRoot = (curRoot)->more;
		(curRoot)->more = nullptr;
		if (newRoot->less != nullptr)
		{
			Node * D = newRoot->less;
			newRoot->less = nullptr;
			(curRoot)->more = D;
		}
		newRoot->less = curRoot;
		*n = newRoot;
	}
	// a>b>c = a<b>c
}

void Tree::RR(Node **n){
	if ((*n)->less != nullptr){
		Node *newRoot;
		Node *curRoot = *n;
		newRoot = (curRoot)->less;
		(curRoot)->less = nullptr;
		if (newRoot->more != nullptr)
		{
			Node * D = newRoot->more;
			newRoot->more = nullptr;
			(curRoot)->less = D;
		}
		newRoot->more = curRoot;
		*n = newRoot;
	}
	// a<b<c = a<b>c
}

void Tree::LR(Node**n){
	Tree::RR(&(*n)->more);
	Tree::LL((n));
}

void Tree::RL(Node**n){
	Tree::LL(&(*n)->more);
	Tree::RR((n));
}

int Tree::hash(string s){
	unsigned i = 0;
	int key = 0;
	int l = s.length();
	while (i < s.length())
	{
		key = key + (int)s[i];
		i++;
	}
	return key;
}


void Tree::Setheight(int height, Node*n){
	if (n != nullptr){
		n->height = height;
		height++;
		Tree::Setheight(height, n->less);
		Tree::Setheight(height, n->more);
	}
}

bool Tree::Search(string word, Node *n){
	if (n != nullptr){
		if ((n->value.compare(word)) == 0)
		{
			return true;
		}
		if (hash(word) > hash(n->value)){
			return Search(word, n->more);
		}
		if (hash(word) < hash(n->value)){
			return Search(word, n->less);
		}
	}
	else {return false;}

}

int Tree::size(Node*n){
	int counter = 1;
	if (n->less != nullptr) counter += size(n->less);
	if (n->more != nullptr) counter += size(n->more);

		return counter;
}

void Tree::clear(Node*n){
	if (n->less != nullptr){
		clear(n->less);
	}
	if (n->more != nullptr){
		clear(n->more);
	}
	delete n;
	n = nullptr;
}


Tree::~Tree()
{
}
