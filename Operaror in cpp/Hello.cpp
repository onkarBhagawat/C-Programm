using namespace std;

#include<iostream>

// Unary Opertaors + - ++ -- ~

class Demo
{
    public:
        int no1, no2;
        Demo(int i = 10, int j = 20)
        {
            this->no1 = i;
            this->no2 = j;
        }

        Demo operator +()
        {
            cout<<"Inside + operator\n";
            return *this;
        }

        Demo operator -()
        {
            cout<<"Inside - operator\n";
            return Demo(-(this->no1), -(this->no2));
        }

        Demo operator ~()
        {
            return Demo(~(this->no1), ~(this->no2));
        }

        Demo operator ++()      // Preincrement
        {
            (this->no1)++;
            (this->no2)++;

            return *this;
        }

        Demo operator ++(int)   // Postincrement
        {
            (this->no1)++;
            (this->no2)++;

            return Demo((this->no1)-1,(this->no2)-1);
        }

        Demo operator --()      // Predecrement
        {
            (this->no1)--;
            (this->no2)--;

            return *this;
        }
        
        Demo operator --(int)   // Postdecrement
        {
            (this->no1)--;
            (this->no2)--;

            return Demo((this->no1)+1,(this->no2)+1);
        }
};

int main()
{
    /*
    Demo obj1(4,6);
    Demo obj2(8,9);

    +obj1;          // obj1.+();        +(&obj1);
    Demo temp(0,0);
    temp = -obj2;   // obj2.-();        -(&obj2);

    cout<<temp.no1<<temp.no2<<"\n";

    temp = ~obj1;

    cout<<temp.no1<<temp.no2<<"\n";
*/
    Demo obj3(10,20);
    Demo obj4(10,20);

    Demo temp1(0,0);
    Demo temp2(0,0);

    cout<<"Demonstration of post increment\n";
    temp1 = obj3++;     // temp1 = obj3.++(101);

    cout<<temp1.no1<<"\t"<<temp1.no2<<"\n";
    cout<<obj3.no1<<"\t"<<obj3.no2<<"\n";

    cout<<"Demonstration of pre increment\n";
    temp2 = ++obj4;     // temp2 = obj4.++();

    cout<<temp2.no1<<"\t"<<temp2.no2<<"\n";
    cout<<obj4.no1<<"\t"<<obj4.no2<<"\n";

    Demo obj5(10,20);
    Demo obj6(10,20);

    Demo temp3(0,0);
    Demo temp4(0,0);

    cout<<"Demonstration of post decrement\n";
    temp3 = obj5--;     // temp3 = obj5.++(101);

    cout<<temp3.no1<<"\t"<<temp3.no2<<"\n";
    cout<<obj5.no1<<"\t"<<obj5.no2<<"\n";

    cout<<"Demonstration of pre decrement\n";
    temp4 = --obj6;     // temp4 = obj6.++();

    cout<<temp4.no1<<"\t"<<temp4.no2<<"\n";
    cout<<obj6.no1<<"\t"<<obj6.no2<<"\n";

    return 0;
}




