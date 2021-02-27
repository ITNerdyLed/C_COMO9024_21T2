#include "stack.h"
#include "assert.h"
extern mystackObject stackObject;
char pop() {
assert(stackObject.top>-1);
int i = stackObject.top;
char ch = stackObject.item[i];
stackObject.top--;
return ch;
}

int isEmpty()
{
return (stackObject.top<0);
}

void stackInit()
{
stackObject.top = 1;
}
