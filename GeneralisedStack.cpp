#include "GeneralisedStack.h"
#include <iostream>
using namespace std;

Stack::Stack(Et type) { this->type = type; }

void Stack::push(int data)
{
	if (this->head == StackSize)
	{
		cout << "Stack is  full" << endl;
		return;
	}
	if (this->type == STYPE_INT)
	{
		this->element[this->head].integer_data = data;

		this->head++;
	}
	else
	{
		cout << "Invalid Datatype";
	}
}
void Stack::push(char data)
{
	if (this->head == StackSize)
	{
		cout << "Stack is  full" << endl;
		return;
	}
	if (this->type == STYPE_CHAR)
	{
		this->element[this->head].char_data = data;
		this->head++;
	}
	else
		cout << "Invalid Datatype";
}
void Stack::push(float data)
{
	if (this->head == StackSize)
	{
		cout << "Stack is  full" << endl;
		return;
	}
	if (this->type == STYPE_FLOAT)
	{
		this->element[this->head].float_data = data;
		this->head++;
	}
	else
		cout << "Invalid DataType";
}
void Stack::push(int *data)
{
	if (this->head == StackSize)
	{
		cout << "Stack is  full" << endl;
		return;
	}
	if (this->type == STYPE_PTR)
	{
		this->element[this->head].integer_pointer = data;
		this->head++;
	}
	else
		cout << "Invalid Datatype";
}

void Stack::pop()
{
	if (this->head == 0)
	{
		cout << "Stack is empty, can't pop" << endl;
		return;
	}
	this->head--;
}
bool Stack::isEmpty()
{
	if (this->head == 0)
		return true;
	else
		return false;
}
bool Stack::isFull()
{
	if (this->head == StackSize)
		return true;
	return false;
}

void Stack::printStack()
{
	for (int i = this->head - 1; i >= 0; i--)
		cout << this->element[i].integer_data << endl;
}
