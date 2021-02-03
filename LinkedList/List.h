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

	List(List<T>&) {}

	~List() {}

	void destroy() {}

	Iterator<T> begin() {}

	Iterator<T> end() {}

	bool contains(const T& object) {}

	void pushFront(const T& value) const
    {
		value = new Node<T>();
		if(List::m_first = nullptr)
		{
			value = m_first;
		}
		else
		{
			value = m_first.next();
		}
	
	}

	void pushBack(const T& value) 
	{
		value = new Node<T>();
		if (List::m_last = nullptr)
		{
			value = m_last;
		}
		else
		{

		}
	}

	bool insert(const T& value, int index) {}

	bool remove(const T& value) {}

	void const print() {}

	void initalize() {}

	bool isEmpty() const {}

	bool getData(Iterator<T>& iter, int index) {}
	
	int const getLength() {}

	const List<T>& operator = (const List<T>& otherList) {}

	void sort() {}

private:

	Node<T> m_first;
	Node<T> m_last;
	int m_nodeCount;
};

