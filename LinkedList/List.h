#pragma once
#include "Iterator.h"
#include "Node.h"
template <typename T>
class List
{
public:
	List() 
	{

	}

	List(List<T>&) 
	{
	
	}

	~List() 
	{
	
	}

	void destroy() 
	{
	
	}

	Iterator<T> begin() 
	{
	
	}

	Iterator<T> end() 
	{

	}

	bool contains(const T& object) 
	{
	
	}

	void pushFront(const T& value) const
    {
		Node<T>* node = new Node<T>(value);

		if (m_first == nullptr)
		{
			node = m_first;
			node->data = value;
			node = m_last;
		}

		else 
		{
			node->next() = m_first;
			m_first = node;
			node->next()->previous() = node;
			node->data = value;
		}

		m_nodeCount++;

	}

	void pushBack(const T& value) 
	{
		Node<T>* newNode = new Node<T>(value);
		if(m_last->next() == nullptr)
		{
			m_last->next() = newNode;
			m_last = newNode;
			newNode->next() = nullptr;
			newNode->data = value;
		}

		m_nodeCount++;

	}

	bool insert(const T& value, int index) 
	{
		Node<T>* node = new Node<T>(value);
		node->next() = index;
		
	}

	bool remove(const T& value) 
	{
		if(value == nullptr)
		{
			return false;
		}

		while(m_first != value) 
		{
			
			return true;
		}
	}

	void const print() 
	{
		while (m_first != nullptr)
		{
			std::cout << m_first->data;
			m_first->Node<T>::next() = m_first;
		}

		std::cout << m_first->data << std::endl;
	}

	void initalize() 
	{
	
	}

	bool isEmpty() const 
	{
	
	}

	bool getData(Iterator<T>& iter, int index) 
	{
	
	}
	
	int const getLength() 
	{
	
	}

	const List<T>& operator = (const List<T>& otherList) 
	{
	
	}

	void sort() 
	{
	
	}

private:

	Node<T> m_first;
	Node<T> m_last;
	int m_nodeCount;
};

