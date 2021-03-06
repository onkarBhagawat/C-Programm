using namespace std;
#include "iostream"
/*
class demo
{
public:
	int i, j;
	demo()
	{
		cout << "default distructer"<<endl;
		i = j = 11;
	}
	demo(demo &obj,int no=10)
	{
		cout << "copy construter"<<endl;
		i = obj.i;
		j = obj.j;
	}
	~demo()
	{
		cout << "\ndistrctor";
	}
};
int main()
{
	demo obi;
	demo obj1(obi);
	demo obj2(obi);
	cout << obi.i << endl << obi.j << endl;
	cout << obj1.j << endl << obj1.i << endl;
	cout << obj2.j << endl << obj2.i << endl;
	return 0;
}
/**/
/*
class demo
{
public:
	int* p;
	int i, j;
	demo()
	{
		cout << "default distructer" << endl;
		p = new int[12];
		p[0] = p[1] = 10;
		//	i = j = 11;
	}
	demo(demo& obj)
	{
		cout << "copy construter" << endl;
		//i = obj.i;
		//j = obj.j;
		p = obj.p;
	}
	~demo()
	{
		cout << "\ndistrctor";
	}
};
int main()
{
	demo obi;
	demo obj1(obi);
	//demo obj2;
	//obj2.i = obj2.j = 21;
	//obj1 = obj2;
	cout << obi.p[0] << endl << obi.p[1] << endl;
	cout << obj1.p[0] << endl << obj1.p[1] << endl;
	obj1.p[0] = obj1.p[1] = 21;
	cout << obi.p[0] << endl << obi.p[1] << endl;
	cout << obj1.p[0] << endl << obj1.p[1] << endl;
	//cout << obj1.j << endl << obj1.i << endl;
	//cout << obj2.j << endl << obj2.i << endl;
	return 0;
}
/*/

//class demo
//{
//public:
//	int* p;
//	int i, j;
//	demo()
//	{
//		cout << "default distructer" << endl;
//		p = new int[12];
//		p[0] = p[1] = 10;
//		//	i = j = 11;
//	}
//	demo(demo& obj)
//	{
//		cout << "copy construter" << endl;
//		//i = obj.i;
//		//j = obj.j;
//		p = new int[2];
//		for (int i = 0; i < 2; i++)
//		{
//			p[i] = obj.p[i];
//
//		}
//	}
//	~demo()
//	{
//		cout << "\ndistrctor";
//	}
//};
//int main()
//{
//	demo obi;
//	demo obj1(obi);
//	//demo obj2;
//	//obj2.i = obj2.j = 21;
//	//obj1 = obj2;
//	cout << obi.p[0] << endl << obi.p[1] << endl;
//	cout << obj1.p[0] << endl << obj1.p[1] << endl;
//	obj1.p[0] = obj1.p[1] = 21;
//	cout << obi.p[0] << endl << obi.p[1] << endl;
//	cout << obj1.p[0] << endl << obj1.p[1] << endl;
//	//cout << obj1.j << endl << obj1.i << endl;
//	//cout << obj2.j << endl << obj2.i << endl;
//	return 0;
//}

//class demo
//{
//public:
//	int i, k;
//	demo()
//	{
//		cout << "default constructer" << endl;
//		//fun();
//
//	class hello
//	{
//	public:
//		hello()
//		{
//			cout << "default constructer" << endl;
//		}
//
//		~hello()
//		{
//			cout << "distrcter" << endl;
//		}
//		}homi;
//	}
//		~demo()
//		{
//			cout << "distrcter" << endl;
//		}
//
//};
//int main()
//{
//	demo obj1;
//	return 0;
//}

//class demo
//{
//public:
//	int i, k;
//	demo()
//	{
//		cout << "default constructer" << endl;
//		//this->i = 10;
//		//(*this).k = 20;
//		//this->k = 50;
//		////fun();
//		demo (10);
//	}
//	demo(int i)
//	{
//		cout << "inside parametrise" << endl;
//		demo (10);
//	}
//	~demo()
//	{
//		cout << "distrcter" << endl;
//
//
//	}
//};
//	//demo obj1;
//	/*void fun()
//	{
//		cout << "inside fun";
//		static demo obj2;
//		cout << "returnig from fun";
//	}*/
//	int main()
//	{
//		cout << "inside main" << endl;
//		//fun();
//		demo obj3;
//		//cout << obj3.i << obj3.k << endl;
//		//cout << "returing from main";
//		return 0;
//	}

/* typedef class demo
{
public:
	const int &ref;
	demo(int i) : ref(i)
	{
		// int i = 50;
		cout << "default constructor";
		//ref = i;
	}
	~demo()
	{
		cout << "destrutor";
	}
};
int main()
{
	cout << "inside main" << endl;
	//demo* p = new demo[2];
	//delete []p;
	//demo* q = (demo*)malloc(2 * sizeof(demo));
	//free(q);
	int x = 10;
	demo obj(x);
	cout << obj.ref << x++ << endl;
	x++;
	cout << obj.ref << x << endl;
	//obj.ref++;
	return 0;

	//demo obj3();
	return 0;
}
 */