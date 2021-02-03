#pragma once

#include "Iterator.h"
template <typename T>
class Node
{
public:
	Node() 
	{
	
	}

	Node(T value) 
	{
		value = new Node();
		value = value->Node::data;
	}

	Node<T>* next() 
	{
		
	}

	Node<T>* previous() 
	{
	
	}

	T data;
};

