// Chapter 3, quiz question 3
// What does the call stack look like in the following program when the point of 
//  execution is on line 4 (8 in this copied version)? Only the function names 
//  are needed for this exercise, not the line numbers indicating the point of return.
#include <iostream>

void d()
{ // here
}

void c()
{
}

void b()
{
	c();
	d();
}

void a()
{
	b();
}

int main()
{
	a();

	return 0;
}