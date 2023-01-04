#include <iostream>
using namespace std;

#define StackSize 100

union Data_types
{
	int integer_data;
	float float_data;
	char char_data;
	int *integer_pointer;
};

enum DataTypesForHomogeniality
{
	STYPE_INT,
	STYPE_FLOAT,
	STYPE_CHAR,
	STYPE_PTR
};

typedef DataTypesForHomogeniality Et;
typedef Data_types Dt;

class Stack
{

private:
	Dt element[StackSize];
	int head = 0;
	Et type;

public:
	Stack(Et type);
	void push(int data);
	void pop();
	void push(char data);
	void push(float data);
	void push(int *data);
	Stack CreateStack(Et type);
	bool isFull();
	bool isEmpty();
	void printStack();
};