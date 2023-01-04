#include <iostream>
#include "GeneralisedStack.h"
using namespace std;

int main()
{
    Stack my_stack(STYPE_INT);
    my_stack.push(10);
    my_stack.push(20);
    // my_stack.push('a');
    my_stack.pop();
    my_stack.printStack();
}