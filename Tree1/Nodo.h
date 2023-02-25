#pragma once
#include<string>

class Nodo
{
public:
	int data{};
	Nodo* left{};
	Nodo* right{};

public:
	Nodo();
	Nodo(Nodo* left_branch, int value, Nodo* right_branch);
	Nodo(int value);
	~Nodo();
};

