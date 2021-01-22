#include<iostream>
#include"List.h"
#ifndef STACK
#define STACK
using namespace std;
class Stack
{
private:
	List L1;
public:
	void push(char d);
	char pop();
	void print();
	char get_Latest();
};


#endif