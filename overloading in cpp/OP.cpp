using namespace std;

#include<iostream>

class Demo
{
    public:
        int no1, no2;
        Demo(int i = 10, int j = 20)
        {
            this->no1 = i;
            this->no2 = j;
        }
        // + is considered as a member function of class Demo which accept
        // one parameter as the object (op2) of Demo and it returns the object of Demo (ans)
        // As the above function is the member function due to which the calller object is also object of class demo that we can access using the concept of this pointer.
    
        // Demo operator +(Demo *const op1, Demo op2)
        // Demo operator +(Demo *const this, Demo op2)
        Demo operator +(Demo op2)       // Member function
        {
            Demo ans(0,0);
            ans.no1 = this->no1 + op2.no1;  // ans.no1 = 4 + 8
            ans.no2 = this->no2 + op2.no2;  // ans.no2 = 6 + 9
            return ans;                                 // ans.no1 = 12 ans.no2 = 15
        }
    
        // Friend function declartion
        friend Demo operator -(Demo,Demo);
};

// Function defination as a naked function
// - is the function which accepts 2 parameters both are the objects of Demo class and this function returns object of Demo class.
Demo operator -(Demo op1,Demo op2)
{
    Demo ans(0,0);
    ans.no1 = op1.no1 - op2.no1;        // ans.no1 = 4 - 8
    ans.no2 = op1.no2 - op2.no2;        // ans.no2 = 6 - 9
    return ans;                                 // ans.no1 = -4 ans.no2 = -3
}

//   Rule :
// 1 -> If we operload Nary (Unary / Binary) operator as a member function then the number of parameters for that function are N-1 ie (1-1 in case of unary and 2-1 in case of binary)

// 2 -> If we overload Nary (Unary / Binary) operator as a friend function then the number of parameters for that function are N ie (1 in case of unary and 2 in case of binary)

// We cant overload the ternary operator.


int main()
{
    Demo obj1(4,6);     // no1 = 4   no2 = 6
    Demo obj2(8,9);     // no1 = 8   no2 = 9
    Demo obj3(1,2);
    
    Demo ret(0,0);      // no1 = 12    no2 = 15
    
    ret = obj1 + obj2;  // Overloaded operator function gets called
    
    // Call to the function + where op2 accpts obj2 and this pointer points to obj1
    // ans object gets returnd from the function + which gets accepted into the object ret
    
    // ret = obj1.+(obj2);
    // ret = +(&obj1,obj2);
    
    cout<<"Result after addition is\n";
    cout<<ret.no1<<"\t"<<ret.no2<<"\n";
    
    // 3 + 2 + 5
    // 5 + 5
    // 10
    
    
    ret = obj1 + obj2 + obj3;
    // ret = (obj1 + obj2) + obj3; ---> ret = (obj1.+(obj2)) + obj3;
    // ret = ans + obj3;   ------> ret = ans + obj3    --> ret = ans.+(obj3)
    //ret = ans;
    
    // ret = obj1 + obj2 + obj3
    // ret = ans + obj3
    // ret = ans
    
    cout<<"Result after addition is\n";
    cout<<ret.no1<<"\t"<<ret.no2<<"\n";

    
    // Call to the friend function
    ret = obj1 - obj2;  // Overloaded operator function gets called
    
    // Call to the function - where op1 accepts obj1 and op2 accepts obj2
    // ans object gets returnd from the function - which gets accepted into the object ret
    
    // ret = -(obj1,obj2);
    
    cout<<"Result after substractions is\n";
    cout<<ret.no1<<"\t"<<ret.no2<<"\n";

    return 0;
}




