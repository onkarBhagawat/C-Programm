using namespace std;
#include <iostream>

////////////////Logic Building Assignment : 44 ////////////

// 1. Write a recursive program which display below pattern.
// Output : * * * * *

/* class Demo
{
public:
    void Display(int iNo)
    {
        if (iNo > 0)
        {
            cout << "*\t";
            iNo--;
            Display(iNo);
        }
    }
};
int main()
{
    int iNo = 0;
    Demo obj;
    cout << "ENTER NUMBER";
    cin >> iNo;
    obj.Display(iNo);
    return 0;
} */

//3.Write a recursive program which display below pattern.
//Output : 5 4 3 2 1

/* class Demo
{
public:
    void Display(int iNo)
    {
        if (iNo > 0)
        {
            cout << iNo << "\t";
            iNo--;
            Display(iNo);
        }
    }
};
int main()
{
    int iNo = 0;
    Demo obj;
    cout << "ENTER NUMBER";
    cin >> iNo;
    obj.Display(iNo);
    return 0;
} */

//2. Write a recursive program which display below pattern.
//Output : 1 2 3 4 5

/* class Demo
{
public:
    int i = 1;
    void Display(int iNo)
    {
        if (i <= iNo)
        {
            cout << i << "\t";
            i++;
            Display(iNo);
        }
    }
};
int main()
{
    int iNo = 0;
    Demo obj;
    cout << "ENTER NUMBER\n";
    cin >> iNo;
    obj.Display(iNo);
    return 0;
} */

// 4.Write a recursive program which display below pattern.
// Output : A B C D E F

/* class Demo
{
public:
    char i = 'A';
    void Display(int iNo)
    {
        if (i <= iNo)
        {
            cout << i << "\t";
            i++;
            Display(iNo);
        }
    }
};
int main()
{
    char iNo = '\0';
    Demo obj;
    cout << "ENTER CHARACTER\n";
    cin >> iNo;
    if ((iNo >= 'a') && (iNo <= 'z'))
    {
        iNo = iNo - 32;
    }
    obj.Display(iNo);
    return 0;
}
 */
// 5.Write a recursive program which display below pattern.
// Output : a b c d e f

/* class Demo
{
public:
    char i = 'a';
    void Display(int iNo)
    {
        if (i <= iNo)
        {
            cout << i << "\t";
            i++;
            Display(iNo);
        }
    }
};
int main()
{
    char iNo = '\0';
    Demo obj;
    cout << "ENTER CHARACTER\n";
    cin >> iNo;
    if ((iNo >= 'A') && (iNo <= 'Z'))
    {
        iNo = iNo + 32;
    }
    obj.Display(iNo);
    return 0;
}
 */
/////////////////Logic Building Assignment : 45 ///////

// 1. Write a recursive program which display below pattern.
// Input : 5
// Output : * * * * *

/* class Demo
{
public:
    void Display(int iNo)
    {
        if (iNo > 0)
        {
            cout << "*\t";
            iNo--;
            Display(iNo);
        }
    }
};
int main()
{
    int iNo = 0;
    Demo obj;
    cout << "ENTER NUMBER\n";
    cin >> iNo;
    obj.Display(iNo);
    return 0;
} */

// 3.Write a recursive program which display below pattern.
// Input : 5
// Output : 5 4 3 2 1

/* class Demo
{
public:
    void Display(int iNo)
    {
        if (iNo > 0)
        {
            cout << iNo << "\t";
            iNo--;
            Display(iNo);
        }
    }
};
int main()
{
    int iNo = 0;
    Demo obj;
    cout << "ENTER NUMBER\n";
    cin >> iNo;
    obj.Display(iNo);
    return 0;
} */

// 2. Write a recursive program which display below pattern.
// Input : 5
// Output : 1 2 3 4 5

/* class Demo
{
public:
    int i = 1;
    void Display(int iNo)
    {
        if (i <= iNo)
        {
            cout << i << "\t";
            i++;
            Display(iNo);
        }
    }
};
int main()
{
    int iNo = 0;
    Demo obj;
    cout << "ENTER NUMBER\n";
    cin >> iNo;
    obj.Display(iNo);
    return 0;
}
 */

// 4.Write a recursive program which display below pattern.
// Input : 6
// Output : A B C D E F
/* 
class Demo
{
public:
    int i = 1;
    char p = 'A';
    void Display(int iNo)
    {
        if (i <= iNo)
        {
            cout << p << "\t";
            i++;
            p++;
            Display(iNo);
        }
    }
};
int main()
{
    int iNo = 0;
    Demo obj;
    cout << "ENTER NUMBER\n";
    cin >> iNo;
    obj.Display(iNo);
    return 0;
}
 */
//5.Write a recursive program which display below pattern.
//Input : 6
//Output : a b c d e f

/* class Demo
{
public:
    int i = 1;
    char p = 'a';
    void Display(int iNo)
    {
        if (i <= iNo)
        {
            cout << p << "\t";
            i++;
            p++;
            Display(iNo);
        }
    }
};
int main()
{
    int iNo = 0;
    Demo obj;
    cout << "ENTER NUMBER\n";
    cin >> iNo;
    obj.Display(iNo);
    return 0;
}
 */

////////////Logic Building Assignment : 46 ////////////

// 1. Write a recursive program which accept number from user and display below
// pattern.
// Input : 5
// Output : 5 * 4 * 3 * 2 * 1 *

/* class Demo
{
public:
    int i = 1;
    Demo()
    {
        int i = 1;
    }
    void Display(int iNo)
    {
        if (i <= iNo)
        {
            cout << i << "\t"
                 << "*\t"<<endl;
            i++;
            Display(iNo);
        }
    }
    ~Demo()
    {
        cout << "INSDE DISTRUTER\n";
    }
};
int main()
{
    int iNo = 0;
    Demo obj;
    cout << "ENTER NUMBER\n";
    cin >> iNo;
    obj.Display(iNo);
    return 0;
}
//  */
// 2. Write a recursive program which accept number from user and return
// summation of its digits.
// Input : 879
// Output : 24

/* class Demo
{
public:
    int i = 0;
    int iSum = 0;
    int summation(int iNo)
    {
        if (iNo != 0)
        {
            i = iNo % 10;
            iSum = iSum + i;
            iNo = iNo / 10;
            summation(iNo);
        }
        return iSum;
    }

    ~Demo()
    {
        cout << "\nINSDE DISTRUTER\n";
    }
};
int main()
{
    int iRet = 0;
    int iNo = 0;
    Demo obj;
    cout << "ENTER NUMBER\n";
    cin >> iNo;
    iRet = obj.summation(iNo);
    cout << iRet;
    return 0;
}
 */
// 3. Write a recursive program which accept string from user and count number
// of characters.
// Input : Hello
// Output : 5

/* class Demo
{
public:
    int i = 0;
    int iSum = 0;
    int Count(char *iNo)
    {
        if (*iNo != '\0')
        {
            i++;
            iNo++;
            Count(iNo);
        }
        return i;
    }

    ~Demo()
    {
        cout << "\nINSDE DISTRUTER\n";
    }
};
int main()
{
    int iRet = 0;
    char iNo[20];
    Demo obj;
    cout << ("ENTER STRING\n");
    gets(iNo);
    iRet = obj.Count(iNo);
    cout << iRet;
    return 0;
} */

// 4. Write a recursive program which accept number from user and return its
// factorial.
// Input : 5

// Output : 120

/* class Demo
{
public:
    int i = 0;
    int iSum = 1;
    int Factorial(int iNo)
    {
        if (iNo > 0)
        {
            iSum = iSum * iNo;
            iNo--;
            Factorial(iNo);
        }
        return iSum;
    }

    ~Demo()
    {
        cout << "\nINSDE DISTRUTER\n";
    }
};
int main()
{
    int iRet = 0;
    int iNo = 0;
    Demo obj;
    cout << ("ENTER NUMBERE\n");
    cin >> iNo;
    iRet = obj.Factorial(iNo);
    cout << iRet;
    return 0;
} */

// 5. Write a recursive program which accept number from user and return its
// product of digits.
// Input : 523
// Output : 30

/* class Demo
{
public:
    int i = 0;
    int iSum = 1;
    int Multy(int iNo)
    {
        if (iNo != 0)
        {
            i = iNo % 10;
            iSum = iSum * i;
            iNo = iNo / 10;
            Multy(iNo);
        }
        return iSum;
    }

    ~Demo()
    {
        cout << "\nINSDE DISTRUTER\n";
    }
};
int main()
{
    int iRet = 0;
    int iNo = 0;
    Demo obj;
    cout << ("ENTER NUMBERE\n");
    cin >> iNo;
    iRet = obj.Multy(iNo);
    cout << iRet;
    return 0;
} */

//////////Logic Building Assignment : 47/////////////

// 1. Write a recursive program which accept string from user and count white
// spaces.
// Input : HE llo WOr lD
// Output : 3

/* class Demo
{
public:
    int i = 0;
    int iSum = 1;
    int Display(char *iNo)
    {
        if (*iNo != '\0')
        {
            if (*iNo == ' ')
            {
                i++;
            }
            iNo++;
            Display(iNo);
        }
        return i;
    }

    ~Demo()
    {
        cout << "\nINSDE DISTRUTER\n";
    }
};
int main()
{
    int iRet = 0;
    char iNo[20] = {'\0'};
    Demo obj;
    cout << ("ENTER STRING\n");
    gets(iNo);
    iRet = obj.Display(iNo);
    cout << iRet;
    return 0;
}
 */

// 2. Write a recursive program which accept number from user and return
// largest digit
// Input : 87983
// Output : 9

/* class Demo
{
public:
    int i = 0;
    int iSum = 0;
    int Larg(int iNo)
    {
        if (iNo != 0)
        {
            i = iNo % 10;
            if (i > iSum)
            {
                iSum = i;
            }
            iNo = iNo / 10;
            Larg(iNo);
        }
        return iSum;
    }
    ~Demo()
    {
        cout << "\nINSDE DISTRUTER\n";
    }
};
int main()
{
    int iRet = 0;
    int iNo = 0;
    Demo obj;
    cout << ("ENTER Number\n");
    cin >> iNo;
    iRet = obj.Larg(iNo);
    cout << iRet;
    return 0;
} */

// 3. Write a recursive program which accept string from user and count number
// of small characters.
// Input : HElloWOrlD
// Output : 5

/* class Demo
{
public:
    int i = 0;
    int iSum = 0;
    int CountSmall(char *iNo)
    {
        if (*iNo != '\0')
        {
            if ((*iNo >= 'a') && (*iNo <= 'z'))
            {
                i++;
            }
            iNo++;
            CountSmall(iNo);
        }
        return i;
    }
    ~Demo()
    {
        cout << "\nINSDE DISTRUTER\n";
    }
};
int main()
{
    int iRet = 0;
    char iNo[20] = {'\0'};
    Demo obj;
    cout << ("ENTER String\n");
    gets(iNo);
    iRet = obj.CountSmall(iNo);
    cout << iRet;
    return 0;
} */

// 5. Write a recursive program which accept number from user and return its
// reverse number.
// Input : 523
// Output : 325
/* 
class Demo
{
public:
    int i = 0;
    int iSum = 0;
    int Reverse(int iNo)
    {
        if (iNo != 0)
        {
            i = iNo % 10;
            iSum = (iSum * 10) + i;
            iNo = iNo / 10;
            Reverse(iNo);
        }
        return iSum;
    }
    ~Demo()
    {
        cout << "\nINSDE DISTRUTER\n";
    }
};
int main()
{
    int iRet = 0;
    int iNo = 0;
    Demo obj;
    cout << ("ENTER Number\n");
    cin >> iNo;
    iRet = obj.Reverse(iNo);
    cout << iRet;
    return 0;
} */