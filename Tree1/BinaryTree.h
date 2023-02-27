#pragma once
#include "Nodo.h"
class BinaryTree: public Nodo
{
public:
	Nodo* root;
public:
	BinaryTree();
	BinaryTree(Nodo* r);
	BinaryTree(int value);
	~BinaryTree();
	Nodo* new_tree(Nodo* left_branch, int value, Nodo* right_branch);
	Nodo* new_tree(int value);
	Nodo* add_child(Nodo* ptr_node, int value);
	Nodo* add_child(int value);
};

