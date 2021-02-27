#include "stack.h"
#include "assert.h"
extern mystackObject stackObject;
void push(char ch )
{
 assert(stackObject.top < MAXITEMS-1);
 stackObject.top++;
 int i = stackObject.top;
 stackObject.item[i] = ch;
}
