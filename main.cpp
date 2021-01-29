// A driver program which can implement the Linked list standard functions 
#include<iostream>
#include<string>
#include<fstream>
#include"Node.h"
#include"List.h"
#include"Stack.h"

using namespace std;
int main()
{
	string temp;						// storing the file data
	int line_no = 0;					// for determing line at which error 
	Stack mystack; bool flag = true;	// flag is used for locating the error
	ifstream file;
	file.open("temp.cpp");
	if(file.is_open())
	{
		while (!file.eof())
		{
			getline(file, temp);
			for (unsigned int i = 0; i < temp.length(); i++)
			{
				if (temp[i] == '{' || temp[i] == '[' || temp[i] == '(')
					mystack.push(temp[i]);

				else if (temp[i] == '}')
				{
					char Temp_Pop = mystack.pop();
					if (Temp_Pop != '{')
					{
						flag = false;
						goto skip;
					}
				}
				else if (temp[i] == ']')
				{
					char Temp_Pop = mystack.pop();
					if (Temp_Pop != '[')
					{
						flag = false;
						goto skip;
					}
				}
				else if (temp[i] == ')')
				{
					char Temp_Pop = mystack.pop();
					if (Temp_Pop != '(')
					{
						flag = false;
						goto skip;
					}
					
				}
				else if (temp[i] == 39)
					i += 2;							// excluding the char keys
				else if (temp[i] == 34)
				{
					i++;
					while (temp[i] != 34)			//excluding the string inside brackets
						i++;
				}
				else if (temp[i] == '/' && temp[++i] == '/')
						break;						//excluding comments
			}
			line_no++;
		}
	}
	file.close();
	skip:
	if (flag == false)
	{	
		if (mystack.get_Latest() != '-')
			cout << "Bracket is Missed  at line no " << line_no ;
		else
			cout << "Bracket is MissPlaced at line no " << line_no +1;
	}
	else 
	{
		if (mystack.get_Latest() != '-')
			cout << "Bracket is Missed at line no " << line_no ;
		else
			cout << "File is VALID\n";
	}
	cout << "\n\nProgram has been ended\n";
	system("pause");
	return 0;
}