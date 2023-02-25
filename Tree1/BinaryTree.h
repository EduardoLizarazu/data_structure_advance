#pragma once
#include "Nodo.h"
class BinaryTree: public Nodo
{
public:
	Nodo* root;
public:
	BinaryTree();
	BinaryTree(Nodo* r);
	~BinaryTree();
	Nodo* new_tree(Nodo* left_branch, int value, Nodo* right_branch);
	Nodo* add_child(Nodo* ptr_node, int value);
};

