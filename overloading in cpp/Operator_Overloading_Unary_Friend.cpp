// Overloading all the unary operators as a friend functions

#include <iostream>

using namespace std;

class demo
{
public:
	int i, j;

	demo(int x = 10, int y = 20)
	{
		i = x;
		j = y;
	}

	demo *This()
	{
		return this;
	}

	// friend functions declarations

	// unary + operator
	friend demo &operator+(demo &a);

	// unary - operator
	friend demo operator-(demo &a);

	// unary ~ operator
	friend demo operator~(demo &a);

	// unary & operator
	friend demo *operator&(demo &a);

	// unary pre-increment operator ++
	friend demo &operator++(demo &a);

	// unary post-increment operator ++
	friend demo operator++(demo &a, int);

	// unary pre-decrement operator --
	friend demo &operator--(demo &a);

	// unary post-decrement operator --
	friend demo operator--(demo &a, int);
};

// Definations of all friend functions

demo &operator+(demo &a)
{
	cout << "Inside unary + operator\n";
	return a;
}

demo operator-(demo &a)
{
	cout << "Inside unary - operator\n";
	return demo(-a.i, -a.j);
}

demo operator~(demo &a)
{
	cout << "Inside unary ~ operator\n";
	return demo(~a.i, ~a.j);
}

demo *operator&(demo &a)
{
	cout << "Inside unary & operator\n";
	return a.This();
}

demo &operator++(demo &a)
{
	cout << "Inside Pre-increment operator\n";
	a.i++;
	a.j++;
	return a;
}

// Second integer is dummy argument just to distinguish between pre and post function signature...
demo operator++(demo &a, int)
{
	cout << "Inside Post-increment operator\n";
	demo temp(a.i, a.j);
	a.i++;
	a.j++;
	return temp;
}

demo &operator--(demo &a)
{
	cout << "Inside Pre-decrement operator\n";
	a.i--;
	a.j--;
	return a;
}

// Second integer is dummy argument just to distinguish between pre and post function signature...
demo operator--(demo &a, int)
{
	cout << "Inside Post-decrement operator\n";
	demo temp(a.i, a.j);
	a.i--;
	a.j--;
	return temp;
}

// Use of operloaded operators
int main()
{
	demo obj;

	+obj; // +(obj);

	-obj; // -(obj);	and so on...

	~obj;

	++obj;

	obj++;

	--obj;

	obj--;

	return 0;
}

