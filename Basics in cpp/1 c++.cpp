#include "iostream"
using namespace std;
#include "stdio.h"

//class omi
//{
//public:
//	int x;
//	int y ;
//	int o;
//	int g;
//	static int q;
//	omi()
//	{
//		cout << "inside defalurt\n";
//		this->x = 0;
//		this-> y = 0;
//
//	}
//	omi(int ino, int omi)
//	{
//		cout << "inside parametrise \n";
//		 x = ino;
//		 y = omi;
//	}
//	omi(int ino, int omi, int mo, int ko)
//	{
//		cout << "inside parametrise";
//		x = ino;
//		y = omi;
//		o = mo;
//		g = ko;
//
//	}
//	~omi()
//	{
//		cout << "inside distruster\n";
//
//	}
// void  fun()
//	{
//	 cout << "inside fun\n";
//	 int i = 0;
//	 int c[5];
//	 cout << "enter yoyr nubmer\n";
//	 for (i = 0; i < c[i]; i++)
//	 {
//		 cin >> c[0];
//	 }
//	 cout<< c[i]<<endl;
//	 
//	//	cout <<c<<"\t" << y<<"\t"<<o<<"\t"<<g;
//		
//	}
//	
//};
//
//int main()
//{
	
	//class demo i ;
	//class demo omi;
	 //omi obj  ;
	//omi obj2(10, 20);
	//omi obj3(20, 30, 40, 50);
	//omi o[2] = { omi(10,20),omi(50,60,50,70) };
	//o[0].fun();
	//o[1].fun();
/*	omi* p = new omi;
	p->fun();
	delete(p)*/;
	
	//obj.fun();
	//obj2.fun();
	//obj3.fun();
	//obj2.fun();
	//omi::fun();//only for static function we can call
	//::fun()//only for globly declred function we can call
	//return 0;

//}

/*
int  main()

{
	using namespace std;
	cout<<"omkar\n";
}
/*/

/*
class demo
{
public:
	int h;
	int y;
	void fun(int, int);
	void gun()
	{
		cout << "x =" <<h<< "\t" << y;
	}
};
void demo:: fun(int ino, int omi)
{
	cout << "inside fun";
	int h = omi;
	int y = ino;
}
int main()
{
	demo obj;
	obj.fun(10, 20);
	obj.gun();
	return 0;


}
/*/

/*
class complex
{
private	:
	int h;
	int p;
public:
	void setfun(int x, int y)
	{
		int h = x;
		int p = y;
	}
	void showgun()
	{
		cout << "h =" << h << "\t" << "p"<<p;
	}
};	


void main()
{
	complex c1;
	c1.setfun(10, 20);
	c1.showgun();
	


}
/*/

/*
struct demo
{
	int i = 10;
	int o = 20;
	
		void setfun(int x, int y)
		{
			int h = x;
			int p = y;
		}
		void showgun(int ino,int omi)
		{
			cout << "h =" << ino << "\t" << "p" << omi;
		}

	
};
int main()
{
	demo obj;
	obj.showgun(10,30);
}
/*/


/*
class omi
{
public:
	int o;
	static float im;
public:
	void fun(int ino)
	{
		o = ino;
		cout << o << "\n";
	}
	 void gun(float r)
	{
		im = r;
		cout << im << "\n";
	}
	 static void don(float p)
	{
	im = p;
		cout << im<<"\n";
	}
	
};
float omi::im;
int main()
{
	omi obj, obj1, obj3;
	obj.fun(15);
	obj1.fun(20);
	obj3.fun(30);
	 
	obj.gun(50);
	obj1.gun(60);
	

	obj.don(31.5);
	omi::don(32.5);
	return 0;

}
/*/


/*
	class omi
	{
	public:
		int x;
		int y;
		int o;
		int g;
	
		omi(int ino,int p)
		{
			cout << "inside defalurt\n";
			 x = ino;
			 y = p;
			 cout << x << "\t" << y;
		}
		omi(int ino, int omi, int mo, int ko)
		{
			cout << "inside parametrise";
			x = ino;
			y = omi;
			o = mo;
			g = ko;
			cout << x << "\t" << y << "\t" << o << "\t" << g;
		}
		
		omi(omi &p)
		{
			cout << "inside  re defalurt\n";
			x = p.x;
			y = p.y;
			o = p.o;
			g = p.g;
			cout << x << "\t" << y << "\t" << o << "\t" << g;

		}
		
		~omi()
		{
			cout << "inside distruster\n";

		}


	};
	int main()
	{
		
		omi c1(10,20);
		omi c2(20, 30, 40, 50);
	omi	c3(c2);
	omi c4(c2);
	omi c5(c3);
	
		return 0;

	}
	/*/
/*
int i; 
	float p = 0;int main()
{
	
	cout << "enter radius";
	cin >> i;
	p = 3.14 * i * i;
	cout << "your area is:"<<p;
	return 0;
}
/*/
/*
int main()
{
	int i, j, k;
	cout << "enter year";
	cin >> i;
	if (((i%4==0))||((i%100==0)&&i%(400==0)))
	
		cout << "leap yaer";
	else
		cout << "is not ";
	return 0;
}



/*/

