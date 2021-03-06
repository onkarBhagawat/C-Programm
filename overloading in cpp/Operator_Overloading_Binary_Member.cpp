/*
	THIS PROGRAM ILLUSTRATES ABOUT :
		the concept of "Operator overloading"...
	=> If opeartor requires primitive data type as a caller member 
		 then we can provide a member function as well as friend function...
*/
// Binary operator overloading by using member function.

#include<iostream>

using namespace std;

class demo
{
	public:
	int i,j;

	demo(int x = 10, int y = 20)
	{
		i = x;
		j = y;
	}

	demo operator +(demo &second)
	{
		cout<<"Inside binary + operator\n";
		return demo(i + second.i, j + second.j);
	}

	demo operator -(demo &second)
	{
		cout<<"Inside binary - operator\n";
		return demo(i - second.i, j - second.j);
	}

	demo operator *(demo &second)
	{
		cout<<"Inside binary * operator\n";
		return demo(i * second.i, j * second.j);
	}

	demo operator /(demo &second)
	{
		cout<<"Inside binary / operator\n";
		return demo(i / second.i, j / second.j);
	}

	demo operator <<(demo &second)
	{
		cout<<"Inside binary << operator\n";
		return demo(i << second.i, j << second.j);
	}

	demo operator >>(demo &second)
	{
		cout<<"Inside binary >> operator\n";
		return demo(i >> second.i, j >> second.j);
	}

	demo & operator +=(demo &second)
	{
		cout<<"Inside binary += operator\n";
		i += second.i;
		j += second.j;
		return *this;
	}

	int operator ==(demo &second)
	{
		cout<<"Inside binary == operator\n";
		return ((i == second.i) && (j == second.j));	
	}

	int operator <(demo &second)
	{
		cout<<"Inside binary < operator\n";
		return ((i < second.i) && (j < second.j));	
	}

	int operator >(demo &second)
	{
		cout<<"Inside binary < operator\n";
		return ((i < second.i) && (j < second.j));	
	}
};

int main()
{
	demo obj1, obj2, obj3;

	obj3 = obj1 + obj2;		// obj1 + obj2 => obj1.+(obj2) and so on...

	obj3 = obj1 - obj2;

	obj3 = obj1 * obj2;

	obj3 = obj1 / obj2;

	obj1 << obj2;

	obj1 >> obj2;

	obj2 += obj1;

	if(obj1 == obj2)
	{
		cout<<"Both objects are equal"<<endl;
	}
	else
	{
		cout<<"Both objects are not equal"<<endl;
	}

	if(obj1 < obj2)
	{
		cout<<"obj1 is less than obj2"<<endl;
	}
	else
	{
		cout<<"obj1 is greater than obj2"<<endl;
	}

	if(obj1 > obj2)
	{
		cout<<"obj1 is greater than obj2"<<endl;
	}
	else
	{
		cout<<"obj1 is less than obj2"<<endl;
	}
	return 0;
}
