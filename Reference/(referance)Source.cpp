using namespace std;
#include <iostream>

class maths
{
private:
     int x;
     int y;
     
public:
    maths()
    {
    cout<<"inside distrutor"<<"\n";
    this->x = 0;
    this->y = 0;
    }
    maths(int value1, int value2)
    {
        cout << "inside para"<<"\n";
        this->x = value1;
        this->y = value2;
    }
    maths(maths &ref)
    {
        cout << "insude ref"<<"\n";
        this->x = ref.x;
        this->y= ref.y;
        cout << this->x<<endl<< this->y;
    }
    ~maths()
    {
        cout << "insie distructor"<<"\n";
    }
    void add()
        
    {
        cout << "insude add"<<"n";
        int ans = 0;
        ans=this-> x +this-> y;
        cout << ans;

    }
    void sub()
    {
        cout << "indyse dun"<<"\n";
       int ans = 0;
        ans = this->x- this->y;
        cout << ans;

    }
};

int main()
{
    cout << "inside main"<<"\n";
    maths obj;
    maths obj1(20, 30);
    maths obj2(obj1);
    obj1.add();
    obj1.sub();
    return 0;
}



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
//public:
//	omi()
//	{
//		cout << "inside defalurt\n";
//		int x = 0;
//		int y = 0;
//
//	}
//	omi(int ino, int omi)
//	{
//		cout << "inside parametrise \n";
//		x = ino;
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
//
// void  fun()
//	{
//		cout << "inside fun\n";
//		cout <<x<<"\t" << y<<"\t"<<o<<"\t"<<g;
//
//	}
//
//};
//
//
//int main()
//{
//	//class demo i ;
//	//class demo omi;
//	 omi obj  ;
//	omi obj2(10, 20);
//	omi obj3(20, 30, 40, 50);
//
//	//obj.fun();
//	obj2.fun();
//	obj3.fun();
//	//obj2.fun();
//	//omi::fun();
//	return 0;
//    

//
//}
/*/

//////////////////////////////////////referancr in c++//////////////////////////////

//typedef int omkar;

//omkar main()
//{
    //    int ino = 10;
    //    int& omi = ino;
    //    cout << omi;
    //    omi++;
    //    cout << omi;
    //    ino++;
    //    cout << omi;
    //    cout << ino;
    //
    //    int& on = omi;
    //    omi++;
    //    cout << omi << "\n";
    //    on++;
    //    cout << omi << "\n";
    //    cout << on << "\n";
    //    int& mi = omi;
    //    mi++;
    //    cout << omi << "\n";
    //    cout << mi << "\n";
    //    omi++;
    //    ino++;
    //    ino++;
    //    omi++;
    //    on++;
    //    mi++;
    //
    //    cout << omi << "\n";
    //    cout << on << "\n";
    //
    //    omkar m = 10;
    //    omkar * p = &m;
    //    cout << m << "\n";
    //    cout << p << "\n";
    //      cout << *p << "\n";
    //      cout << &m << "\n";
    //      int*&in = p;
    //      cout << in << "\n";
    //      cout << p << "\n";
    //          cout << *in << "\n";
    //          cout << *p << "\n";*/

         /*omkar no = 11;
              int& on = no;
              int* p = &on;
              cout << *p << "\n";


              omkar n[20] = { 10,20,30,40 };
              omkar(&omi)[20] = n;
              cout << omi[2] << "\n"
              cout << n[2] << "\n";


              int thise-> = 10;
              int& om = thise->;
              cout << thise-> << "\n";
              cout << om << "\n";

              int y = 21;
              om= y;
              cout << y << "\n";
              cout << om << "\n";
              return 0;*/
//}

///////////////////dynamic memory allocation//////////////

// void fun()
//{
//    int thise->;
//}
// int main()
// {
//     fun();
//     int* p=NULL;
//    // p = new int(22);
//     p = (int*)malloc( sizeof (int));
//     cout << *p;
//     return 0;
// }


//int main()
//{
//    int size = 10;
//    int* p = NULL;
//  // p = new int(50);
//    p = (int*)malloc(size*sizeof(4));
//   cout << *p;
//}