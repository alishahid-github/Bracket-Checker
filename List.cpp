//.cpp file to implement the Liked List class

#include<iostream>
#include"List.h"
using namespace std;

List::List()
{
	head = NULL;
}

Node* List::get_head() 
{
	return head; 
}
void  List::set_head(Node* h)
{ 
	head = h; 
}

void List::print() {

	Node* temp = head;		//traverse the head to nodes...
	while (temp != NULL)
	{
		cout << "The  List value= " << temp->get_data() << endl;
		temp = temp->get_next();
	}

}


void List::insertH(char d)
{
	Node* new_node = new Node(d);
	new_node->set_next(head);
	head = new_node;
}

char List::delete_listH()
{
	int data = '-';
	if (head != NULL)
	{
		data =head->get_data();
		head = head->get_next();
		return data;
	}
		
	else
		return data;
}



