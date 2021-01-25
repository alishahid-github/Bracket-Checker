//stack header file with char supported for Braker Checker

#include "Stack.h"
#include "Node.h"

void Stack::push(char d)
{
	L1.insertH(d);
}

char Stack::pop()
{
	return L1.delete_listH();
}

void Stack::print()
{
	if (L1.get_head() == NULL)
		cout << "\nStack is empty";
	else
	{
		Node* temp = L1.get_head();
		while(temp != NULL)
		{ 
			cout << "\tvalue is = "<<temp->get_data();
			temp = temp->get_next();
		}
	}
}

char Stack::get_Latest()
{
	char data = '-';
	if (L1.get_head() != NULL)
		data = L1.get_head()->get_data();
	return data;
}
