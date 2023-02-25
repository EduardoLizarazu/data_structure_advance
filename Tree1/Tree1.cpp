// Tree1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
#include "BinaryTree.h"
#include "Nodo.h"

int main()
{
    int numbers[10] = { 17, 4, 1, 20, 9, 23, 18, 34, 18, 4 };

    BinaryTree tree_root;
    Nodo* root;
    root = tree_root.new_tree(NULL, 17, NULL);
    tree_root.add_child(root, 4);
    tree_root.add_child(root, 18);
    tree_root.add_child(root, 6);

    return 0;
}

