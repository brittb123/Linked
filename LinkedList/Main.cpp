#pragma once
#include <iostream>
#include "List.h"



int main()
{
	std::cout << "A New List Being Made: " << std::endl;
	List<int>* list = new List<int>(); 

	std::cout << "List Shown: " << std::endl;
	list->print();

	system("pause");

	std::cout << "Adding nodes: " << std::endl;
	list->insert(2, 0);
	

	std::cout << "List Updated: " << std::endl;
	list->print();

	system("pause");

	return 0;
}