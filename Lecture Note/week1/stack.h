void stackInit ();
int isEmpty ();
void push(char);
char pop();
#define MAXITEMS 10
typedef struct{
char item[MAXITEMS];
int top;
}mystackObject;
