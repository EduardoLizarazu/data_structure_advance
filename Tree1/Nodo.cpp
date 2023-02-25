#include "Nodo.h"
#pragma once
#include<iostream>

Nodo::Nodo(){}
Nodo::Nodo(Nodo* left_branch, int value, Nodo* right_branch){
	data = value;
	left = left_branch;
	right = right_branch;
}
Nodo::Nodo(int value) { 
	data = value;
	left = right = NULL;
}
Nodo::~Nodo(){}
