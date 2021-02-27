#include "stdio.h"
#include "stack.h"
mystackObject stackObject;

int main()
{
 stackInit();   
 push('o');
 push('l');
 push('l');
 push('e');
 push('h');
 printf("%c",pop());
 printf("%c",pop());
 printf("%c",pop());
 printf("%c",pop());
 printf("%c",pop());
 return 0;
}