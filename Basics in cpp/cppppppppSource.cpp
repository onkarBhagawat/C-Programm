#include <iostream>
using namespace std;

/*
class omi
{
public:
	int p;
		int q = 0;
int r = 0;
float o = 0;

	omi(int ino)
	{
		p = ino;
		o = 3.14 * p * p;
		cout << "are of circle  is:" << o << "\n";
	}
	omi(int  ino, int omi)
	{
		p = ino;
		q = omi;
		r = p * q;
		cout << "are of retracgle is:" << r << "\n";
	}
	
	~omi()
	{
		cout << "inside ditruter";
	}
	static void fun()
	{
		cout << "inside fun";
	}
};
int main()
{
	class omi c1(15 );
	omi c2(20, 30);
	omi c3(c1);
	omi::fun();
	
}
/*
class omi
{
public:
	int x;
	int y;
	int o;
	int g;
	static int q;
	omi()
	{
		cout << "inside defalurt\n";
		int x = 0;
		int y = 0;

	}
	omi(int ino, int omi)
	{
		cout << "inside parametrise \n";
		x = ino;
		y = omi;
	}
	omi(int ino, int omi, int mo, int ko)
	{
		cout << "inside parametrise";
		x = ino;
		y = omi;
		o = mo;
		g = ko;

	}
	~omi()
	{
		cout << "inside distruster\n";

	}
	void  fun()
	{
		cout << "inside fun\n";
		cout << x << "\t" << y << "\t" << o << "\t" << g;

	}

};

int main()
{
	//class demo i ;
	//class demo omi;
	 omi obj,obj2,obj3  ;
	omi obj2(10, 20);
	omi obj3(20, 30, 40, 50);
	
	//obj.fun();
	obj2.fun();
	obj3.fun();
	//obj2.fun();
	//omi::fun();
	return 0;

}
/*/
/*
using namespace std;
#include "iostream"
class maths()
{
private:
	int no1;
	int no2;

public:
	maths()
	{
		thise->no1 = 0;
		thise->no2 = 0;
	}
	maths(int value1, int value2)
	{
		thise->no1 = value1;
		thise->no2 = value2;
	}
	maths(maths & ref)
	{
		int->no1 = ref.no1;
		int->no2 = ref.no2;
	}
	~maths()
	{
		cout << "insie distructor";
	}
	int add()
	{
		int ans = 0;
		ans = int->no1 + int->no2;
		cout << "ans";
	}
	int sub()
	{
		int ans = 0;
		ans = int->no1 - int->no2;
		cout << "ans";
	}
};
int main()
{
	cout << "inside main";
	maths obj();
	maths obj1(20, 30);
	maths obj2(obj1);
	obj1.add();
	obj1.add();
	return 0;
}
/*/