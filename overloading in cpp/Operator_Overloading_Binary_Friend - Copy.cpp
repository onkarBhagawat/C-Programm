/*
	THIS PROGRAM ILLUSTRATES ABOUT :
		the concept of "Operator overloading"...
	=> If opeartor requires primitive data type as a caller member 
		 then we can provide a member function as well as friend function...
	=> If the first parameter of that operator is a primitive data type then 
		 we must need to provide friend function because it's not allowed 
			to call operator function by using primitive datatypes (invoker for that)...
*/

// Binary operator overloading by using friend function.

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

	// friend functions declarations...

	// Binary + operator
	friend demo operator +(demo &first, demo &second);

	// Binary - operator
	friend demo operator -(demo &first, demo &second);

	// Binary * operator
	friend demo operator *(demo &first, demo &second);

	// Binary / operator
	friend demo operator /(demo &first, demo &second);

	// Binary << operator
	friend demo operator <<(demo &first, demo &second);

	// Binary >> operator
	friend demo operator >>(demo &first, demo &second);

	// Binary += operator
	friend demo & operator +=(demo &first, demo &second);

	// Binary assignment operator
	friend int operator ==(demo &first, demo &second);

	// Binary conditional operator
	friend int operator <(demo &first, demo &second);

	// Binary conditional operator
	friend int operator >(demo &first, demo &second);

};

// Definations of overloaded operators...

demo operator +(demo &first, demo &second)
{
	cout<<"Inside binary + operator\n";
	return demo(first.i + second.i, first.j + second.j);
}

demo operator -(demo &first, demo &second)
{
	cout<<"Inside binary - operator\n";
	return demo(first.i - second.i, first.j - second.j);
}

demo operator *(demo &first, demo &second)
{
	cout<<"Inside binary * operator\n";
	return demo(first.i * second.i, first.j * second.j);
}

demo operator /(demo &first, demo &second)
{
	cout<<"Inside binary / operator\n";
	return demo(first.i / second.i, first.j / second.j);
}

demo operator <<(demo &first, demo &second)
{
	cout<<"Inside binary << operator\n";
	return demo(first.i << second.i, first.j << second.j);
}

demo operator >>(demo &first, demo &second)
{
	cout<<"Inside binary >> operator\n";
	return demo(first.i >> second.i, first.j >> second.j);
}

demo & operator +=(demo &first, demo &second)
{
	cout<<"Inside binary += operator\n";
	first.i += second.i;
	first.j += second.j;
	return first;
}

int operator ==(demo &first, demo &second)
{
	cout<<"Inside binary == operator\n";
	return ((first.i == second.i) && (first.j == second.j));	
}

int operator <(demo &first, demo &second)
{
	cout<<"Inside binary < operator\n";
	return ((first.i < second.i) && (first.j < second.j));	
}

int operator >(demo &first, demo &second)
{
	cout<<"Inside binary > operator\n";
	return ((first.i > second.i) && (first.j > second.j));	
}

int main()
{

	demo obj1, obj2, obj3;

	obj3 = obj1 + obj2;		// obj1 + obj2 => +(obj1, obj2);

	obj3 = obj1 - obj2;		// obj1 - obj2 => -(obj1, obj2);

	obj3 = obj1 * obj2;		// obj1 * obj2 => *(obj1, obj2);

	obj3 = obj1 / obj2;		// obj1 / obj2 => /(obj1, obj2);

	obj1 << obj2;			// obj1 << obj2 => <<(obj1, obj2);

	obj1 >> obj2;			// obj1 >> obj2 => >>(obj1, obj2);

	obj2 += obj1;			// obj1 += obj2 => +=(obj1, obj2);

	if(obj1 == obj2)		// obj1 == obj2 => ==(obj1, obj2);
	{
		cout<<"Both objects are equal"<<endl;
	}
	else
	{
		cout<<"Both objects are not equal"<<endl;
	}

	if(obj1 < obj2)			// obj1 < obj2 => <(obj1, obj2);
	{
		cout<<"obj1 is less than obj2"<<endl;
	}
	else
	{
		cout<<"obj1 is greater than obj2"<<endl;
	}

	if(obj1 > obj2)			// obj1 > obj2 => >(obj1, obj2);
	{
		cout<<"obj1 is greater than obj2"<<endl;
	}
	else
	{
		cout<<"obj1 is less than obj2"<<endl;
	}
	return 0;
}
