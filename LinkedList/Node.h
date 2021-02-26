#pragma once
#include <iostream>

template <typename T>
class Node
{
public:
	Node();

	Node(T value);

	Node<T>* next;

	Node<T>* previous;

	T data;
};

// Creates a new node and sets next and previous to be null
template<typename T>
inline Node<T>::Node()
{
	next = new Node<T>();
	previous = new Node<T>();
}

// Creates a new node, setting the next and previous to be null
// and the data is set to be the value passed in
template<typename T>
inline Node<T>::Node(T value)
{
	const Node* previous;
	int data = value;
	const Node* next;
}
