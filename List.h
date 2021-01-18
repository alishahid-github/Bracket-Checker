//Header file for the Linked List with Basic funtions use in Bracket Checker

#include<iostream>
#include"Node.h"
#ifndef LIST
#define LIST
using namespace std;
class List {
public:
	List();
	void insertH(char d);		// d=data
	char delete_listH();
	void print();
	void set_head(Node* h);
	Node* get_head();		// usage will be in main on neeed base
	int node_count = 0;

private:
	Node* head;
};

#endif
