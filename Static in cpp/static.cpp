using namespace std;
#include <iostream>
// struct demo
// {
//     static int i;
//     int j;

// public:

//     void fun()
//     {
//         j = ++i;
//         cout << "j   " << j << endl;
//         cout << "i" << i << endl;
//         // i++;
//     }
//     void gun()
//     {
//         cout << "j   " << j << endl;
//     }
//     static void run()
//     {
//         cout << "i" << i << endl;
//     }
// };
// //int demo::i=20;
// int demo::i;
// int main()
// {

//     demo a, b;
//     a.fun();
//     a.run();
//     b.fun();
//     b.run();
//     a.gun();

// a.fun();
//  demo::run();
//  a.run();
//  a.i=20;
//   a.fun();
// a.gun();
//  a.run();
//    a.fun();
// a.gun();
// a.run();
// demo c;
//  c.run();
// demo::run();
// a.run();
// b.run();
// c.run();

/*  demo a, b, c;

    a.gun();
    b.gun();
    c.gun();
    a.fun(100);
    a.gun();
    b.fun(200);
    a.gun();
    c.fun(300);
    a.gun();
    a.gun();
    b.gun();
    c.gun();
    // a.fun(100);
    // b.fun(200);
    // c.fun(300);
    // a.gun();
    // b.gun();
    // c.gun(); */
//}

/* void fun()
{
    static int i = 10;
    int j = 10;
    i++;
    j++;
    cout << i << endl
         << j << endl;
       
}
int main()
{
    fun();
    fun();
    fun();
}

// i++;
// j++;
// cout<<i<<j<<i<<j;
 */

// class demo
// {
// public:
//     int i, j;
//     static int k,l;

//     demo()
//     {
//         i = 10;
//         //j = 20;
//         //  k = 30;
//     }
//      void fun()
//     {
//         cout << ++i;
//         cout << ++k;
//         k = 31;
//         i=21;
//         //cout<<i;
//     }
// };
// int demo::k = 20;
// int main()
// {
//     demo obj;
//      //demo::fun();
//     obj.fun();
//     //obj.i++;
//     // cout<<sizeof(obj);
//     //cout << obj.i<<endl << obj1.i<<endl ;//<< obj.k<<demo::k;
//     //obj.k++;
//     cout << obj.k<< endl << obj.i<<endl ;

//     return 0;
// }

// class demo
// {
//     int i,j;
//     static int k,l;
// };
// class omi:public demo
// {
//     public:
//     int a,b;
//     static int x,y;
// };
// int demo::k=10,l=20;
// int omi::x=50,y=60;
// int main()
// {
//     cout<<sizeof(demo)<<endl;
//     cout<<sizeof(omi)<<endl;
// }

//  class demo
// {
// public:
// static int i;
// int j;
//     static void fun()
//     {
//         cout << "omi"<<this->i<<endl;
//     }
//     void gun()
//     {
//         cout << "obhagawat"<<this->j<<endl;
//     }
// };
// int demo::i=21;
//class omi : public demo
// {
// public:
//     static void fun()
//     {
//         cout << "omi";
//     }
//     void gun()
//     {
//         cout << "obhagawat";
//     }
// };
// int main()
// {
//     demo obj;
//     omi obj1;
//     obj.fun();
//     obj.gun();
// obj1.fun();
// obj1.gun();
// demo::fun();
// omi::fun();
// omi::demo::fun();
//}
// class demo
// {
// public:
//   //  static int i;
//     //int j;
//     static demo()
//     {
//         cout<<"omi";
//         i = 11;
//         j = 12;
//     }
//     demo(demo &ref)
//     {
//         i = demo::i;
//         this->j = j;
//     }
// };
// int demo::i = 21;
// int main()
// {
//     demo obj;
//     obj.j = 51;
//     obj.i++ ;
//     cout << obj.i << obj.j << endl;
//     demo obj1(obj);
//     cout << obj.i << obj.j << endl;
// }

// class demo
// {
//     int a;
//     static int b;

// public:
//     demo()
//     {
//         a = ++b;
//         cout << "inside con";
//     }
//     void fun()
//     {
//         cout << "\n\t\tx==" << a<<endl;
//     }
//     static void gun()
//     {
//         cout << "inside com" << b<<endl;
//     }
// };
// int demo::b;
// int main()
// {
//     demo::gun();
//     demo demo1;
//     demo::gun();
//     demo1.fun();
//     demo::gun();
//     demo1.fun();
//     demo demo3;
//     demo::gun();
//     demo3.fun();
//     return 0;
// }
// static int i = 0;
// class demo
// {
// public:
//     static int i;
//     static void fun()
//     {
//         ++i;
//         ++::i;
//         ++omi::i;
//     }
//     class omi
//     {
//     public:
//         static int i;
//         static void fun()
//         {
//             ++i;
//             ++::i;
//             ++demo::i;
//         }
//     } obj;
// } obj;
//    int demo ::i = 10;
// int demo::omi::i = 20;

// int main()
// {

//     demo::fun();
//     demo::fun();
//     demo ::omi::fun();
//     demo ::omi::fun();
//     demo::fun();
//     cout << i << endl;
//     cout << obj.i << endl;
//     cout << obj.obj.i << endl;
//     cout << obj.i;
//     return 0;
// }

class demo
{
public:
    int p = 10;
    static int i;
    demo()
    {
        i++;
        p++;
    }
};
int demo::i = 20;
int main()
{
    demo obj,obj3;


    cout << obj.i;
    cout << obj.p;

    cout<<obj3.i;

}
