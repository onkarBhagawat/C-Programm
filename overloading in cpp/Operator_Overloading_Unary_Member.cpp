// Overloading of unary operators as a member functions 

#include<iostream>

using namespace std;

class demo
{
	public:
		int i,j;

		// Constructor
		demo(int x = 10, int y = 20)
		{
			i = x;
			j = y;
		}

		demo & operator +()
		{
			cout<<"Inside unary + operator\n";
			return *this;		
		}

		demo operator -()
		{
			cout<<"Inside unary - operator\n";
			return demo(-i, -j);		
		}

		demo operator ~()
		{
			cout<<"Inside unary ~ operator\n";
			return demo(~i, ~j);
		}		

		demo & operator ++()
		{
			cout<<"Inside Pre-increment operator\n";
			i++;
			j++;
			return *this;
		}

		demo operator ++(int)
		{
			cout<<"Inside Post-increment operator\n";
			demo temp(i,j);		
			i++;
			j++;
			return *this;
		}

		demo & operator --()
		{
			cout<<"Inside Pre-decrement operator\n";
			i--;
			j--;
			return *this;
	}

		demo operator --(int)
		{
			cout<<"Inside Post-decrement operator\n";
			demo temp(i,j);		
			i--;
			j--;
			return *this;
		}

};

// Use of operloaded operators
int main()
{
	demo obj;

	+obj;		// obj.+();		and so on...
	
	-obj;

	~obj;
	
	++obj;
	
	obj++;
	
	--obj;
	
	obj--;

	return 0;
}
