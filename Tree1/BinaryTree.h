#pragma once
#include "Nodo.h"
class BinaryTree: public Nodo
{
public:
	Nodo* root;
	int counter_node{};
	int counter_array{0};
public:
	BinaryTree();
	BinaryTree(Nodo* r);
	BinaryTree(int value);
	~BinaryTree();
	Nodo* new_tree(Nodo* left_branch, int value, Nodo* right_branch);
	Nodo* new_tree(int value);
	Nodo* add_child(Nodo* ptr_node, int value);
	Nodo* add_child(int value);
	void in_order(Nodo* ptr_node);
};

