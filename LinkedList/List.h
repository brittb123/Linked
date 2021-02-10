#pragma once
#include <iostream>
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

	Iterator<T> begin() const
	{
		return m_first;
	}

	Iterator<T> end() const
	{
		return m_last->Node<T>::next();
	}

	bool contains(const T& object) 
	{
		for (Iterator<int> iter = begin(); iter != end(); iter++)
		{
			if (iter != object)
				iter++;

			if (iter = object)
				return true;
		}

		return false;
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

			if (value = nullptr)
			   return;

			if (m_last = nullptr)
			{
			   m_first = newNode;
			   m_last = newNode;
			   newNode->data = value;
			   m_nodeCount++;
			   return;
			}

			newNode->previous() = m_last;
			m_last->next() = newNode;
			m_last = newNode;
			newNode->next() = nullptr;
			newNode->data = value;
			
		    m_nodeCount++;
	}

	bool insert(const T& value, int index) 
	{
		if(value = index)
		{
			Node<T>* node = new Node<T>(value);
			node->next() = index;
			m_nodeCount++;
			return true;
		}
		
		return false;
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
		for(Iterator<int> iter = begin(); iter != end(); iter++)
		{
			std::cout << *iter << std::endl;
		}

	}

	void initalize() 
	{
		m_first = nullptr;
		m_last = nullptr;
		m_nodeCount = 0;
	}

	bool isEmpty() const 
	{
		if (m_nodeCount == 0)
			return true;

		return false;
	}

	bool getData(Iterator<T>& iter, int index) 
	{
	
	}
	
	int const getLength() 
	{
		return m_nodeCount;
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

