#pragma once
#include <iostream>
#include "Iterator.h"
#include "Node.h"

template <typename T>
class List
{
public:
	List();

	List(List<T>&);

	~List();

	void print();

	void destroy();

	const Iterator<T> begin();

	const Iterator<T> end();

	bool contains(const T& object);

	void const pushFront(const T& value);

	void pushBack(const T& value);

	bool insert(const T& value, int index);

	bool remove(const T& value);

	void initalize();

    bool isEmpty() const;

	bool getData(Iterator<T>& iter, int index);

	int const getLength();

	const List<T>& operator = (const List<T>& otherList);

	void sort();

private:

	Node<T> m_first;
	Node<T> m_last;
	int m_nodeCount;
};

// Generates a new list
template<typename T>
inline List<T>::List()
{

}

// Removes the list that generated
template<typename T>
inline List<T>::~List()
{
	delete List<T>;
}

// Creates a new list and sets the first item to be the value put in
template<typename T>
inline List<T>::List(List<T>& list)
{
	m_first = list;
}

// A function used to print the nodes in order
template<typename T>
inline void List<T>::print()
{
	// Loops through the list with iterators 
	for (Iterator<T> iter = begin(); iter != end(); ++iter)
	{
		// Prints the iterators value with each loop 
		std::cout << *iter << std::endl;
	}

}

// Removes every item in the list going through the entire list
template<typename T>
inline void List<T>::destroy()
{
	// Loops through until the end of the list is reached and removes the current node
	for (Iterator<T> iterator = begin(); iterator != end(); ++iterator)
		remove(iterator.m_current);
}

template<typename T>
inline bool List<T>::insert(const T &value, int index)
{
	return value;
}

// Checks if the list contains the object being searched
template<typename T>
inline bool List<T>::contains(const T &object)
{
	// Makes a bool if the item exists
	bool exists = false;

	// Creates a new iterator to loop through the list
	Iterator<T> iterator = begin();

	// A while loop to continue until the iterator hits the end
	while (iterator != end())
	{
		// If the iterator equals the object the function returns true
		if (iterator == object)
		{
			exists = true;
		}

		// If the current iterator is not equal to the object the iterator increments
		iterator++;
	}

	return exists;
}

// Pushes the value from the param to the front of the object
template<typename T>
inline const void List<T>::pushFront(const T &value)
{
	// Sets a node to be a new node with the value
	Node<T>* node = new Node<T>(value);

	// If first is null the node will be set to first,
	// the  data is eqaul to the value 
	// and the last is equal to the node
	if (m_first == nullptr)
	{
		node = m_first;
		node->data = value;
		node = m_last;
	}

	// If the list is already containing a first
	// the first is moved to the second node
	// the new node made is set to equal the first the
	// value is also set to the data

	else
	{
		m_first = m_first->next;
		m_first = node;
		node->next->previous = node;
		node->data = value;
	}

	m_nodeCount++;

}

// A function to get the beginning of the list
template<typename T>
inline const Iterator<T> List<T>::begin()
{
	// Returns the previous of the m_first to start the list
	return m_first.Node<T>::previous;
}

// A function to get the end of the list
template<typename T>
inline const Iterator<T> List<T>::end()
{
	// Returns the next of the m_last to end the list
	return m_last.Node<T>::next;
}

// Inserts a node to the back of the list
template<typename T>
inline void List<T>::pushBack(const T &value)
{
	// Creates a new node with the value
	Node<T>* newNode = new Node<T>(value);

	// Returns if the value is a null value
	if (value = nullptr)
		return;
	
	// If last is equal null this block of code is ran
	if (m_last = nullptr)
	{
		// The first and last is set to the new node created
		m_first = newNode;
		m_last = newNode;

		//The data is set to the value of the new node and increments the node count
		newNode->data = value;
		m_nodeCount++;
		return;
	}

	// If the last equals a node already the new node is put at the end
	m_last->next = newNode;

	// The previous of the new node is set to the last node
	newNode->previous = m_last;

	// The new node is set to equal the last variable
	m_last = newNode;

	// New node's data is set to the value and the next is set to null
	newNode->next = nullptr;
	newNode->data = value;

	// The node count increases for each node added
	m_nodeCount++;
}

// A function to remove a specific value from the list
template<typename T>
inline bool List<T>::remove(const T &value)
{
	// Returns if the value inserted is a null value
	if (value == nullptr)
	{
		return false;
	}


	//If the value exist the previous is set to the next and vice versa then deleted
	while (value != nullptr)
	{
		value.previous = value.next.previous;
		delete value;
		return true;
	}
}

// A function to initialize the list
template<typename T>
inline void List<T>::initalize() 
{
	// Sets the first last and nodecount to be 0
	m_first = nullptr;
	m_last = nullptr;
	m_nodeCount = 0;
}

// A simple function to check if the list is empty
template<typename T>
inline bool List<T>::isEmpty() const
{
	// If the node count is equal 0 then it returns true otherwise returns false
	if (m_nodeCount == 0)
		return true;

	return false;
}

// A function to return the node count of the list
template<typename T>
inline int const List<T>::getLength()
{
	return m_nodeCount;
}

// A function to sort the list by order
template<typename T>
inline void List<T>::sort()
{
	// This first loop is used to check if the 
	// node count still has nodes remaining
	for (int i = 0; i < m_nodeCount; i++)
	{
		for (int j = m_nodeCount - 1; j > i; j--)
		{
			// If the current is less than next then
			// current remains but if vice versa then the numbers swap
			if (Iterator<T>::current < Iterator<T>::current.next)
			{
				T temporary = Iterator<T>.current;
				Iterator<T>* current = this.next;
			}

		}
	}
}

// Overloads the operator to equal another list
template<typename T>
inline const List<T>& List<T>::operator=(const List<T>& otherList)
{
	// Creates two new iterators one for the begining of the 
	// list and the other for the first of the second list
	Iterator<T> NewIter = new Iterator<T>(begin());
	Iterator<T> SecondIter = new Iterator<T>(otherList.m_first);
	 
	// While the first iterator does not equal the end of the second list's end
	while (NewIter != otherList.m_last)
	{
		// A for loop that goes through the list and sets the currents to equal each other
		for (int iter = 0; iter < otherList.getLength(); iter++)
		{
			NewIter.current == SecondIter.current;
		}
	}
}