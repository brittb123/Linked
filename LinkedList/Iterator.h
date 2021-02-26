#pragma once
#include "Node.h"


template <typename T>
class Iterator
{
private:
	Node<T> *current;

public:
	Iterator();

	Iterator(Node<T>* node);

	Iterator<T> operator++();

	Iterator<T> operator --();

	const bool operator ==(const Iterator<T>& iter);

	const bool operator !=(const Iterator<T>& iter);

	T operator *();
};

   // A function to create an iterator
	template<typename T>
	inline Iterator<T>::Iterator()
	{
		current = nullptr;
	}

	// A function made to create an iterator at a certain node
	template<typename T>
	inline Iterator<T>::Iterator(Node<T>* node)
	{
		current = node;
	}

	// A overload operator to increment to the next node in the list
	template<typename T>
	inline Iterator<T> Iterator<T>::operator++()
	{
		current = current->Node<T>::next;
		return current;
	}

	// A operator overload that decreases the current node able to get the previous node of the current
	template<typename T>
	inline Iterator<T> Iterator<T>::operator--()
	{
		current = current.previous;
		
	}

	// A overload for an operator to set a current to another current
	template<typename T>
	inline const bool Iterator<T>::operator ==(const Iterator<T>& iter)
	{
		iter.current == current;
	}

	// A operator that is overloaded to check if a current is not equal to another current
	template<typename T>
	inline const bool Iterator<T>::operator !=(const Iterator<T>& iter)
	{
		return iter.current != current;

	}

	// A operator to always return the data of a current node
	template<typename T>
	inline T Iterator<T>::operator*()
	{
		return current->data;
	}


