#include "StackLL.h"
#include <iostream>

using namespace std;
class Stack::Node 
{
	public:
	int data =0;
	Node* link = nullptr;
	
};

Stack::~Stack()
{
	while (num_elements >0)
	pop();
}

int Stack::size()
{
return num_elements;
}

void Stack::push(int num)
{
	Node* newPtr = new Node{num};//creates new node for stack
	
	newPtr->link = frontPtr; //connects new node to the front pointer	
	frontPtr = newPtr;//assigns the new node to the top of the stack

	num_elements++;
}	
void Stack::pop()
{
 	Node* delPtr = frontPtr;//new node for deletion
	
	frontPtr = frontPtr->link; 
	delPtr = delPtr->link;

	delete delPtr;
	num_elements--;
}
int Stack::top()
{

return frontPtr->data; 

}
void Stack::clear()
{
	while (num_elements >0)
	pop();
}
