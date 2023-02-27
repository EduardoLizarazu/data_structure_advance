#include "BinaryTree.h"
#include<iostream>

BinaryTree::BinaryTree() { root = NULL;}

BinaryTree::BinaryTree(int value) {
    root = new Nodo(NULL, value, NULL);
}

BinaryTree::BinaryTree(Nodo* r) { root = r; }

BinaryTree::~BinaryTree(){}

Nodo* BinaryTree::add_child(Nodo* ptr_node, int value) {
    if (ptr_node->data == value)
    {
        return ptr_node;
    }
    // left subtree
    if (value < ptr_node->data) {
        if (ptr_node->left) {  // continue
            ptr_node->left = add_child(ptr_node->left, value);
        }
        else { // create node
            ptr_node->left = new Nodo(value);
        }
    }
    else { // right subtree
        if (ptr_node->right) {  // continue
            ptr_node->right = add_child(ptr_node->right, value);
        }
        else { // create node
            ptr_node->right = new Nodo(value);
        }
    }
}

Nodo* BinaryTree::add_child(int value) {
    if (root->data == value)
    {
        return root;
    }
    // left subtree
    if (value < root->data) {
        if (root->left) {  // continue
            root->left = add_child(root->left, value);
        }
        else { // create node
            root->left = new Nodo(value);
        }
    }
    else { // right subtree
        if (root->right) {  // continue
            root->right = add_child(root->right, value);
        }
        else { // create node
            root->right = new Nodo(value);
        }
    }
}

Nodo* BinaryTree::new_tree
    (Nodo* left_branch, int value, Nodo* right_branch) {
    return new Nodo(left_branch, value, right_branch);
}

Nodo* BinaryTree::new_tree(int value) {
    return new Nodo(value);
}