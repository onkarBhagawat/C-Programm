using namespace std;
#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <io.h>
////////////////Logic Building Assignment : 48
///////open, creat, write,read,display//
//1. Write application which accept file name from user and open that file in read mode.

/* class Demo
{
private:
    int fd = 0, iRet = 0, Length = 0;

public:
    void Open(char *Arr)
    {
        fd = open(Arr, O_RDWR | O_CREAT, 0777);
        if (fd == -1)
        {
            cout << "File Unable To Creat Or Open" << endl;
        }
        else
        {
            cout << "File Craet Or Open Succesfully With Fd:->" << fd << endl;
        }
    }
    void Write(char *Brr)
    {
        cout
            << "Enter Data You Wnat To Write" << endl;
        gets(Brr);
        Length = strlen(Brr);
        iRet = write(fd, Brr, Length);

        if (iRet == -1)
        {
            cout << "Unable To Write File" << endl;
        }
        else
        {
            cout << "Data Succesfully Written To File" << endl;
        }
    }
    void Display(char *Arr)
    {

        Length = strlen(Arr);
        fd = open(Arr, O_RDONLY);
        if (fd == -1)
        {
            cout << "File Unable To Creat Or Open" << endl;
        }
        else
        {
            cout << "Your Data:" << endl;
            while ((iRet = read(fd, Arr, Length)) != 0)
            {
                write(1, Arr, iRet);
            }
            close(fd);
        }
    }
    int Size(char *Arr)
    {
        iRet = sizeof(Arr);
        return iRet;
    }
    int length(char *Arr)
    {
        iRet = strlen(Arr);
        cout << endl
             << iRet << endl;
        while (*Arr != '\0')
        {
            Length++;
            Arr++;
        }
        return Length;
    }
};
int main()
{
    Demo obj;
    int iRet = 0, iGet = 0;
    char Arr[50] = {'\0'};
    char Brr[50] = {'\0'};
    cout << "ENTER File Nmae\n";
    gets(Arr);
    obj.Open(Arr);
    obj.Write(Brr);
    obj.Display(Arr);
    iRet = obj.Size(Arr);
    cout << endl
         << "Size is->:" << iRet << "\tBytes" << endl;
    iGet = obj.length(Arr);
    cout << "Length is->:" << iGet << "\tBytes" << endl;
    return 0;
} */

// 5. Write application which accept file name from user and one string from user. Write
// that string at the end of file.
// Input : Demo.txt
//  Hello World
//Output : Write Hello World at the end of Demo.txt file

/* class Demo
{
private:
    int fd = 0, iRet = 0, Length = 0, c = 0;

public:
    void Open(char *Arr)
    {
        fd = open(Arr, O_RDWR | O_CREAT, 0777);
        if (fd == -1)
        {
            cout << "File Unable To Creat Or Open" << endl;
        }
        else
        {
            cout << "File Craet Or Open Succesfully With Fd:->" << fd << endl;
        }
    }
    int Write(char *Brr)
    {
        cout
            << "Enter Data You Wnat To Write" << endl;
        gets(Brr);
        Length = strlen(Brr);
        iRet = write(fd, Brr, Length);

        if (iRet == -1)
        {
            cout << "Unable To Write File" << endl;
        }
        else
        {
            cout << "Data Succesfully Written To File" << endl;
        }
    }
    void Display(char *Arr)
    {
        fd = open(Arr, O_RDONLY);
        if (fd == -1)
        {
            cout << "File Unable To Creat Or Open" << endl;
        }
        else
        {
            cout << "Your Data:" << endl;
            while ((iRet = read(fd, Arr, 50)) != 0)
            {

                write(1, Arr, iRet);
                cout << endl
                     << "Size:->" << iRet << "\tBytes" << endl;
            }
        } close(fd);
    }
   
};
int main()
{
    Demo obj;
    int iRet = 0, iGet = 0;
    char Arr[50] = {'\0'};
    char Brr[50] = {'\0'};
    cout << "ENTER File Nmae\n";
    gets(Arr);
    obj.Open(Arr);
    iRet = obj.Write(Brr);
    cout << iRet << endl;

    return 0;
} */
/* 
class Demo
{
private:
    int fd = 0, iRet = 0, Length = 0, c = 0;

public:
    void Open(char *Arr)
    {
        fd = open(Arr, O_RDWR | O_CREAT, 0777);
        if (fd == -1)
        {
            cout << "File Unable To Creat Or Open" << endl;
        }
        else
        {
            cout << "File Craet Or Open Succesfully With Fd:->" << fd << endl;
        }
    }
    void Write(char *Brr)
    {
        cout
            << "Enter Data You Wnat To Write" << endl;
        gets(Brr);
        Length = strlen(Brr);
        iRet = write(fd, Brr, Length);

        if (iRet == -1)
        {
            cout << "Unable To Write File" << endl;
        }
        else
        {
            cout << "Data Succesfully Written To File" << endl;
        }
    }
    void Size(char *Arr)
    {
        fd = open(Arr, O_RDONLY);
        {

            iRet = lseek(fd, 0, SEEK_END);
            cout << "Your Size:" << iRet;
            close(fd);
        }
    }
};

int main()
{
    Demo obj;
    int iRet = 0, iGet = 0;
    char Arr[50] = {'\0'};
    char Brr[50] = {'\0'};
    cout << "ENTER File Nmae\n";
    gets(Arr);
    obj.Open(Arr);
    obj.Write(Arr);
    obj.Size(Arr);

    return 0;
}
 */
///////////////Logic Building Assignment : 49
/* 1. Write a program which accepts file name from user and count number of
capital characters from that file. 
 */

/* class Demo
{
private:
    int fd = 0, iRet = 0, Length = 0, i = 0;
    int Ans = 0;
    char Mug[26] = {'\0'};

public:
    void Open(char *Arr)
    {
        fd = open(Arr, O_RDWR | O_CREAT, 0777);
        if (fd == -1)
        {
            cout << "File Unable To Creat Or Open" << endl;
        }
        else
        {
            cout << "File Craet Or Open Succesfully With Fd:->" << fd << endl;
        }
    }
    void Write(char *Brr)
    {
        cout
            << "Enter Data You Wnat To Write" << endl;
        gets(Brr);
        Length = strlen(Brr);
        iRet = write(fd, Brr, Length);

        if (iRet == -1)
        {
            cout << "Unable To Write File" << endl;
        }
        else
        {
            cout << "Data Succesfully Written To File" << endl;
        }
    }

    void Display(char *Arr)
    {

        fd = open(Arr, O_RDONLY);
        if (fd == -1)
        {
            cout << "File Unable To Creat Or Open" << endl;
        }
        else
        {
            cout << "Your Data:" << endl;
            while ((iRet = read(fd, Mug, sizeof(Mug))) != 0)
            {
                for (i = 0; i < iRet; i++)
                {

                    if ((*Mug >= 'A') && (*Mug <= 'Z'))
                    {
                        Ans++;
                    }
                }
                write(1, Arr, iRet);
            }
            cout << endl
                 << "CAPITAL LATTER ARE:->"
                 << Ans << endl;

            close(fd);
        }
    }
};
int main()
{
    Demo obj;
    int iRet = 0, iGet = 0;
    char Arr[50] = {'\0'};
    char Brr[50] = {'\0'};
    cout << "ENTER File Nmae\n";
    gets(Arr);
    obj.Open(Arr);
    obj.Display(Arr);
    return 0;
}
 */

/////////////

// 2. Write a program which accepts file name from user and count number of
//     small characters from that file.Input : Demo.
//            Output : Number of small characters are 21

/* class Demo
{
private:
    int fd = 0, iRet = 0, Length = 0, i = 0;
    int Ans = 0;
    char Mug[26] = {'\0'};

public:
    void Open(char *Arr)
    {
        fd = open(Arr, O_RDWR | O_CREAT, 0777);
        if (fd == -1)
        {
            cout << "File Unable To Creat Or Open" << endl;
        }
        else
        {
            cout << "File Craet Or Open Succesfully With Fd:->" << fd << endl;
        }
    }
    void Write(char *Brr)
    {
        cout
            << "Enter Data You Wnat To Write" << endl;
        gets(Brr);
        Length = strlen(Brr);
        iRet = write(fd, Brr, Length);

        if (iRet == -1)
        {
            cout << "Unable To Write File" << endl;
        }
        else
        {
            cout << "Data Succesfully Written To File" << endl;
        }
    }

    void Display(char *Arr)
    {

        fd = open(Arr, O_RDONLY);
        if (fd == -1)
        {
            cout << "File Unable To Creat Or Open" << endl;
        }
        else
        {
            cout << "Your Data:" << endl;
            while ((iRet = read(fd, Mug, sizeof(Mug))) != 0)
            {
                for (i = 0; i < iRet; i++)
                {

                    if ((*Mug >= 'a') && (*Mug <= 'z'))
                    {
                        Ans++;
                    }
                }
            }
            cout << endl
                 << "SMALL LATTERs LATTER ARE:->"
                 << Ans << endl;

            close(fd);
        }
    }
};
int main()
{
    Demo obj;
    int iRet = 0, iGet = 0;
    char Arr[50] = {'\0'};
    char Brr[50] = {'\0'};
    cout << "ENTER File Nmae\n";
    gets(Arr);
    obj.Open(Arr);
    obj.Display(Arr);
    return 0;
}

 */
// 3. Write a program which accepts file name from user and count number of
// white spaces from that file.
// Input : Demo.txt
//Output : Number of white spaces are 13

/* class Demo
{
private:
    int fd = 0, iRet = 0, Length = 0, i = 0;
    int Ans = 0;
    char Mug[26] = {'\0'};

public:
    void Open(char *Arr)
    {
        fd = open(Arr, O_RDWR | O_CREAT, 0777);
        if (fd == -1)
        {
            cout << "File Unable To Creat Or Open" << endl;
        }
        else
        {
            cout << "File Craet Or Open Succesfully With Fd:->" << fd << endl;
        }
    }
    void Write(char *Brr)
    {
        cout
            << "Enter Data You Wnat To Write" << endl;
        gets(Brr);
        Length = strlen(Brr);
        iRet = write(fd, Brr, Length);

        if (iRet == -1)
        {
            cout << "Unable To Write File" << endl;
        }
        else
        {
            cout << "Data Succesfully Written To File" << endl;
        }
    }

    void Display(char *Arr)
    {

        fd = open(Arr, O_RDONLY);
        if (fd == -1)
        {
            cout << "File Unable To Creat Or Open" << endl;
        }
        else
        {
            cout << "Your Data:" << endl;
            while ((iRet = read(fd, Mug, sizeof(Mug))) != 0)
            {
                for (i = 0; i < iRet; i++)
                {
                    if (*Mug == (' '))
                    {
                        Ans++;
                    }
                }
            }
            cout << endl
                 << "WHITE SPACE  ARE:->"
                 << Ans << endl;

            close(fd);
        }
    }
};
int main()
{
    Demo obj;
    int iRet = 0, iGet = 0;
    char Arr[50] = {'\0'};
    char Brr[50] = {'\0'};
    cout << "ENTER File Nmae\n";
    gets(Arr);
    obj.Open(Arr);
    obj.Display(Arr);
    return 0;
}
 */

// 4. Write a program which accepts file name and one character from user and
// count number of occurrences of that characters from that file.
// Input : Demo.txt ‘M’
// Output : Frequency of M is 7

/* class Demo
{
private:
    int fd = 0, iRet = 0, Length = 0, i = 0;
    int Ans = 0;
    char Mug[100] = {'\0'};

public:
    void Open(char *Arr)
    {
        fd = open(Arr, O_RDONLY);
        if (fd == -1)
        {
            cout << "File Unable To Creat Or Open" << endl;
        }
        else
        {
            cout << "File Craet Or Open Succesfully With Fd:->" << fd << endl;
        }
    }
    void Write(char *Brr)
    {
        cout
            << "Enter Data You Wnat To Write" << endl;
        gets(Brr);
        Length = strlen(Brr);
        iRet = write(fd, Brr, Length);

        if (iRet == -1)
        {
            cout << "Unable To Write File" << endl;
        }
        else
        {
            cout << "Data Succesfully Written To File" << endl;
        }
    }

    void Display(char *Arr, int Position, char cValue)
    {
        char *p = NULL;
        p = new char(cValue);

        fd = open(Arr, O_RDONLY);
        if (fd == -1)

        {
            cout << "File Unable To Creat Or Open" << endl;
        }
        else
        {
            cout << "Your Data:" << endl;

            while ((iRet = read(fd, Mug, sizeof(Mug))) != 0)
            {

                {
                    for (i = 0; i < iRet; i++)
                    {
                        if (*Mug == ('p'))
                        {
                            Ans++;
                        }
                    }
                }
                write(1, Mug, iRet);
            }

            close(fd);
            delete (Mug);
        }
    }
};
int main()
{
    Demo obj;
    int iRet = 0, iGet = 0;
    char Arr[50] = {'\0'};
    char Brr[50] = {'\0'};
    cout << "ENTER File Nmae\n";
    gets(Arr);
    obj.Open(Arr);
    // obj.Write(Brr);
    obj.Display(Arr, iGet);
    return 0;
}
 */
// 5. Write a program which accepts file name and one count from user and read
//     that number of characters from starting position.Input : Demo.txt 12 Output : Display first 12 characters from Demo.txt

/* class Demo
{
private:
    int fd = 0, iRet = 0, Length = 0, i = 0;
    int Ans = 0;
    char Mug[100] = {'\0'};

public:
    void Open(char *Arr)
    {
        fd = open(Arr, O_RDONLY);
        if (fd == -1)
        {
            cout << "File Unable To Creat Or Open" << endl;
        }
        else
        {
            cout << "File Craet Or Open Succesfully With Fd:->" << fd << endl;
        }
    }
    void Write(char *Brr)
    {
        cout
            << "Enter Data You Wnat To Write" << endl;
        gets(Brr);
        Length = strlen(Brr);
        iRet = write(fd, Brr, Length);

        if (iRet == -1)
        {
            cout << "Unable To Write File" << endl;
        }
        else
        {
            cout << "Data Succesfully Written To File" << endl;
        }
    }

    void Display(char *Arr, int Position)
    {
        // char *p = NULL;
        // p = new char(cValue);

        fd = open(Arr, O_RDONLY);
        if (fd == -1)

        {
            cout << "File Unable To Creat Or Open" << endl;
        }
        else
        {
            cout << "Your Data:" << endl;
            //lseek(fd, Position, SEEK_SET);

            iRet = read(fd, Mug, Position);

            write(1, Mug, iRet);
            // while ((iRet = read(fd, Mug, 100)) != 0)
            // {
            //     write(1, Mug, iRet);
            // }

            close(fd);
            // delete (Mug);
        }
    }
};
int main()
{
    Demo obj;
    int iRet = 0, iGet = 0;
    char Arr[50] = {'\0'};
    char Brr[50] = {'\0'};
    cout << "ENTER File Nmae\n";
    gets(Arr);

    obj.Open(Arr);
    // obj.Write(Brr);
    cout << "ENTER Position\n";
    cin >> iGet;
    obj.Display(Arr, iGet);
    return 0;
}
 */

///////////////Logic Building Assignment : 50 //////////////
// 1. Write a program which accept oinformation of students from user and
//     write that information into the file.

/* typedef struct Demo
{
    int RollNO;
    char Name[10];
    char Batch[10];
    int Fee;
    struct Demo *Next;
} NODE, *PNODE;
class Student
{
private:
    int fd = 0, fd1 = 0, iRet = 0;
    char Buffer[100] = {'\0'};
    char Buffer1[100] = {'\0'};
    NODE sobj;
    PNODE newn = NULL;

public:
    void Write(char *Arr)
    {
        fd = open(Arr, O_WRONLY);

        if (fd == -1)
        {
            cout << "\nFile Not opene\n";
        }
        else
        {
            cout << "\nFile open Succesfully\n";
            cout << "Enter No Of Students\n";
            cin >> iRet;
            for (int i = 1; i <= iRet; i++)
            {
                cout << "Enter Roll No\n";
                cin >> sobj.RollNO;
                cout << "Enter Name\n";
                scanf(" %[^'\n']s", sobj.Name);
                cout << "Enter Batch\n";
                scanf(" %[^'\n']s", sobj.Batch);
                cout << "Enter Fee\n";
                cin >> sobj.Fee;

                write(fd, &sobj, sizeof(sobj));
            }
        }
        close(fd);
    }
    void Read(char *Arr)
    {
        fd = open(Arr, O_RDONLY);
        if (fd == -1)
        {
            cout << "FIle Not Open\n";
        }

        cout << "\nDATA FROME THE FILE\n";
        while ((iRet = read(fd, &sobj, sizeof(sobj))) != 0)
        {

            cout << " Roll No:->\t" << sobj.RollNO << endl;

            cout << "Enter Name\t" << sobj.Name << endl;

            cout << "Enter Batch\t" << sobj.Batch << endl;

            cout << "Enter Batch\t" << sobj.Fee << endl;
        }

        close(fd);
    }

    void Write1(char *Arr, char *Brr)
    {
        fd = open(Arr, O_RDONLY);
        if (fd == -1)
        {
            cout << "FIle Not Open\n";
        }
        else
        {
            cout << endl
                 << "File open\n";
        }

        fd1 = open(Brr, O_RDWR | O_CREAT, 0777);
        if (fd == -1)
        {
            cout << "UNABLE TO OPEN\n";
        }
        else
        {
            while ((iRet = read(fd, &sobj, sizeof(sobj))) != 0)
            {
                write(fd1, &sobj, iRet);
            }
        }

        close(fd1);
    }
};
int main()
{
    Student obj;
    char Arr[50] = {'\0'};
    char Brr[50] = {'\0'};
    cout << "\nEnter File Name\n";
    gets(Arr);
    obj.Write(Arr);
    obj.Read(Arr);
    cout << "Enter Destination File Name\n";
    scanf(" %[^'\n']s", Brr);
    obj.Write1(Arr, Brr);
}
 */

// 2. Write a program which read all the information of students from the
//     file.

/*  typedef struct Demo
{
    int RollNO;
    char Name[10];
    char Batch[10];
    int Fee;
    struct Demo *Next;
} NODE, *PNODE;
class Student
{
private:
    int fd = 0, fd1 = 0, iRet = 0;
    char Buffer[100] = {'\0'};
    char Buffer1[100] = {'\0'};
    NODE sobj;
    PNODE newn = NULL;

public:
    void Write(char *Arr)
    {
        fd = open(Arr, O_WRONLY);

        if (fd == -1)
        {
            cout << "\nFile Not opene\n";
        }
        else
        {
            cout << "\nFile open Succesfully\n";
            cout << "Enter No Of Students\n";
            cin >> iRet;
            for (int i = 1; i <= iRet; i++)
            {
                cout << "Enter Roll No\n";
                cin >> sobj.RollNO;
                cout << "Enter Name\n";
                scanf(" %[^'\n']s", sobj.Name);
                cout << "Enter Batch\n";
                scanf(" %[^'\n']s", sobj.Batch);
                cout << "Enter Fee\n";
                cin >> sobj.Fee;

                write(fd, &sobj, sizeof(sobj));
            }
        }
        close(fd);
    }
    void Read(char *Arr)
    {
        fd = open(Arr, O_RDONLY);
        if (fd == -1)
        {
            cout << "FIle Not Open\n";
        }

        cout << "\nDATA FROME THE FILE\n";
        while ((iRet = read(fd, &sobj, sizeof(sobj))) != 0)
        {

            cout << " Roll No:->\t" << sobj.RollNO << endl;

            cout << "Enter Name\t" << sobj.Name << endl;

            cout << "Enter Batch\t" << sobj.Batch << endl;

            cout << "Enter Batch\t" << sobj.Fee << endl;
        }

        close(fd);
    }

    void Write1(char *Arr, char *Brr)
    {
        fd = open(Arr, O_RDONLY);
        if (fd == -1)
        {
            cout << "FIle Not Open\n";
        }
        else
        {
            cout << endl
                 << "File open\n";
        }

        fd1 = open(Brr, O_RDWR | O_CREAT, 0777);
        if (fd == -1)
        {
            cout << "UNABLE TO OPEN\n";
        }
        else
        {
            while ((iRet = read(fd, &sobj, sizeof(sobj))) != 0)
            {
                write(fd1, &sobj, iRet);
            }
        }

        close(fd1);
    }
};
int main()
{
    Student obj;
    char Arr[50] = {'\0'};
    char Brr[50] = {'\0'};
    cout << "\nEnter File Name\n";
    gets(Arr);
    obj.Write(Arr);
    obj.Read(Arr);
    cout << "Enter Destination File Name\n";
    scanf(" %[^'\n']s", Brr);
    obj.Write1(Arr, Brr);
}
 */

// 3. Write a program which accept file name which contains information of
// student and isplay only names of students.

/* typedef struct Demo
{
    int RollNO;
    char Name[10];
    char Batch[10];
    int Fee;
    struct Demo *Next;
} NODE, *PNODE;
class Student
{
private:
    int fd = 0, fd1 = 0, iRet = 0;
    char Buffer[100] = {'\0'};
    char Buffer1[100] = {'\0'};
    NODE sobj;
    PNODE newn = NULL;

public:
    void Write(char *Arr)
    {
        fd = open(Arr, O_WRONLY);

        if (fd == -1)
        {
            cout << "\nFile Not opene\n";
        }
        else
        {
            cout << "\nFile open Succesfully\n";
            cout << "Enter No Of Students\n";
            cin >> iRet;
            for (int i = 1; i <= iRet; i++)
            {
                cout << "Enter Roll No\n";
                cin >> sobj.RollNO;
                cout << "Enter Name\n";
                scanf(" %[^'\n']s", sobj.Name);
                cout << "Enter Batch\n";
                scanf(" %[^'\n']s", sobj.Batch);
                cout << "Enter Fee\n";
                cin >> sobj.Fee;

                write(fd, &sobj, sizeof(sobj));
            }
        }
        close(fd);
    }
    void Read(char *Arr)
    {
        fd = open(Arr, O_RDONLY);
        if (fd == -1)
        {
            cout << "FIle Not Open\n";
        }

        cout << "\nDATA FROME THE FILE\n";
        while ((iRet = read(fd, &sobj, sizeof(sobj))) != 0)
        {

            // cout << " Roll No:->\t" << sobj.RollNO << endl;

            cout << "Enter Name\t" << sobj.Name << endl;

            // cout << "Enter Batch\t" << sobj.Batch << endl;

            // cout << "Enter Batch\t" << sobj.Fee << endl;
        }

        close(fd);
    }
};
int main()
{
    Student obj;
    char Arr[50] = {'\0'};
    char Brr[50] = {'\0'};
    cout << "\nEnter File Name\n";
    gets(Arr);
    obj.Write(Arr);
    obj.Read(Arr);
} */

// 5. Write a program which accept file name which contains information of
//     student and display addition of marks of all sudents
/* 
typedef struct Demo
{
    int RollNO;
    char Name[10];
    char Batch[10];
    int Fee;
    struct Demo *Next;
} NODE, *PNODE;
class Student
{
private:
    int fd = 0, fd1 = 0, iRet = 0, iSum = 0;
    char Buffer[100] = {'\0'};
    char Buffer1[100] = {'\0'};
    NODE sobj;
    PNODE newn = NULL;

public:
    void Write(char *Arr)
    {
        fd = open(Arr, O_WRONLY);

        if (fd == -1)
        {
            cout << "\nFile Not opene\n";
        }
        else
        {
            cout << "\nFile open Succesfully\n";
            cout << "Enter No Of Students\n";
            cin >> iRet;
            for (int i = 1; i <= iRet; i++)
            {

                cout << "Enter Roll No\n";
                cin >> sobj.RollNO;

                cout << "Enter Name\n";
                scanf(" %[^'\n']s", sobj.Name);

                cout << "Enter Batch\n";
                scanf(" %[^'\n']s", sobj.Batch);

                cout << "Enter Fee\n";
                cin >> sobj.Fee;

                write(fd, &sobj, sizeof(sobj));
            }
        }
        close(fd);
    }
    void Read(char *Arr)
    {
        fd = open(Arr, O_RDONLY);
        if (fd == -1)
        {
            cout << "FIle Not Open\n";
        }

        cout << "\nDATA FROME THE FILE\n";

        while ((iRet = read(fd, &sobj, sizeof(sobj))) != 0)
        {
            cout << endl
                 << " Roll No:->\t" << sobj.RollNO << endl;

            cout << "Enter Name\t" << sobj.Name << endl;

            cout << "Enter Batch\t" << sobj.Batch << endl;

            cout << "Enter Fee\t" << sobj.Fee << endl;

            iSum = iSum + (sobj.Fee);
        }
        close(fd);
        cout << endl
             << iSum << endl;
    }
};
int main()
{
    Student obj;
    char Arr[50] = {'\0'};
    char Brr[50] = {'\0'};
    cout << "\nEnter File Name\n";
    gets(Arr);
    obj.Write(Arr);
    obj.Read(Arr);
}
 */

//////////////Logic Building Assignment : 51 ///

// 1. Write a program which accept file name which contains information of
//     student as well as accept name of student and dsplay only information of
//         that student.

/* typedef struct Demo
{
    int RollNO;
    char Name[10];
    char Batch[10];
    int Fee;
    struct Demo *Next;
} NODE, *PNODE;
class Student
{
private:
    int fd = 0, fd1 = 0, iRet = 0, iSum = 0;
    char Buffer[100] = {'\0'};
    char Buffer1[100] = {'\0'};
    NODE sobj;
    PNODE newn = NULL;

public:
    // void Write(char *Arr)
    // {
    //     fd = open(Arr, O_WRONLY | O_CREAT, 0777);
    //     if (fd == -1)
    //     {
    //         cout << "\nFile Not opene\n";
    //     }
    //     else
    //     {
    //         cout << "\nFile open Succesfully\n";
    //         cout << "Enter No Of Students\n";
    //         cin >> iRet;
    //         for (int i = 1; i <= iRet; i++)
    //         {

    //             cout << "Enter Roll No\n";
    //             cin >> sobj.RollNO;

    //             cout << "Enter Name\n";
    //             scanf(" %[^'\n']s", sobj.Name);

    //             cout << "Enter Batch\n";
    //             scanf(" %[^'\n']s", sobj.Batch);

    //             cout << "Enter Fee\n";
    //             cin >> sobj.Fee;

    //             write(fd, &sobj, sizeof(sobj));
    //         }
    //     }
    // }
    void Read(char *Arr)
    {
        char Brr[10];
        cout << "\nEnter Student Name\n";
        scanf(" %[^'\n]s", Brr);

        cout << endl
             << Brr << endl;

        fd = open(Arr, O_RDONLY);

        if (fd == -1)

        {
            cout << "FIle Not Open\n";
        }

        // if ((Brr) == (Arr))
        // {
        //     cout << endl
        //          << " Roll No:->\t" << sobj.RollNO << endl;

        //     cout << "Enter Name\t" << sobj.Name << endl;

        //     cout << "Enter Batch\t" << sobj.Batch << endl;

        //     cout << "Enter Fee\t" << sobj.Fee << endl;
        // }
        // cout << "\nDATA FROME THE FILE\n";

        while ((iRet = read(fd, &sobj, sizeof(sobj))) != 0)

        {
            cout << endl
                 << " Roll No:->\t" << sobj.RollNO << endl;

            cout << "Enter Name\t" << sobj.Name << endl;

            cout << "Enter Batch\t" << sobj.Batch << endl;

            cout << "Enter Fee\t" << sobj.Fee << endl;
        }
        close(fd);
    }
}

;
int main()
{
    Student obj;
    char Arr[50] = {'\0'};
    char Brr[50] = {'\0'};
    cout << "\nEnter File Name\n";
    gets(Arr);
    // obj.Write(Arr);
    obj.Read(Arr);
} */

/* struct student
{
    int Rollno;
    char Name[20];
    int Marks;
};

void FileWrite(char *name)
{
    int fd = 0, ret = 0, size = 0, i = 0;
    struct student sobj;

    fd = open(name, O_WRONLY);
    if (fd == -1)
    {
        printf("Unable to open file\n");
        return;
    }
    printf("Enter number of students");
    scanf("%d", &size);

    for (i = 1; i <= size; i++) // while(Head!= NULL)
    {
        printf("Enter roll number\n");
        scanf("%d", &sobj.Rollno);
        printf("Enter Name of student\n");
        scanf("%s", &sobj.Name);
        printf("Enter marks\n");
        scanf("%d", &sobj.Marks);

        write(fd, &sobj, sizeof(sobj)); // write(fd,Head,sizeof(Node));
    }
    close(fd);
}

void FileRead(char *name)
{
    int fd = 0, ret = 0, size = 0, i = 0;
    struct student sobj;

    fd = open(name, O_RDONLY);
    if (fd == -1)
    {
        printf("Unable to open file\n");
        return;
    }

    printf("Data from file is : \n");

    while ((ret = read(fd, &sobj, sizeof(sobj))) != 0)
    {
        printf("Roll number is : %d\n", sobj.Rollno);
        printf("Name of student : %s\n", sobj.Name);
        printf("Marks : %d\n", sobj.Marks);
    }

    close(fd);
}

int main()
{
    char name[20];

    printf("Enter file name\n");
    scanf("%s", name);

    FileWrite(name);

    FileRead(name);

    return 0;
}
 */

// 3. Write a program which accept file name which contains information of
// student and display all names of students having marks greater than 90.

/* class Student
{
private:
    int RollNO;
    char Name[10];
    char Batch[10];
    int Fee;
    int fd = 0, fd1 = 0, iRet = 0, iSum = 0;
    char Buffer[100] = {'\0'};
    char Brr[50] = {'\0'};
    // char Buffer1[100] = {'\0'};

public:
    Student()
    {
        int RollNO = 0;
        char Name[10] = {'\0'};
        char Batch[10] = {'\0'};
        int Fee = 0;
    }
    void Write(char *Arr)
    {
        fd = open(Arr, O_WRONLY | O_CREAT, 0777);
        if (fd == -1)
        {
            cout << "\nFile Not opene\n";
        }
        else
        {
            cout << "\nFile open Succesfully\n";
            cout << "Enter No Of Students\n";
            cin >> iRet;
            for (int i = 1; i <= iRet; i++)
            {

                cout << "Enter Roll No\n";
                cin >> RollNO;

                cout << "Enter Name\n";
                scanf(" %[^'\n']s", Name);

                cout << "Enter Batch\n";
                scanf(" %[^'\n']s", Batch);

                cout << "Enter Fee\n";
                cin >> Fee;

                write(fd, (char *)this, sizeof(*this));
            }
        }
        close(fd);
    }
    void fileread(char *Arr)
    {
        int fd = 0;
        int ret = 0;
        fd = open(Arr, O_RDONLY);
        if (fd == -1)
        {
            printf("unable to read \n");
        }

        printf("data from file is: \n");

        while ((ret = read(fd, (char *)this, sizeof(*this))))
        {
            if ((Fee <= 90))
            {
                cout << endl
                     << Name << endl;
            }
        }

        close(fd);
    }
};

int main()
{
    Student obj;
    char Arr[50] = {'\0'};
    cout << "\nEnter File Name\n";
    gets(Arr);
    obj.Write(Arr);
    obj.fileread(Arr);
}
 */

// 2. Write a program which accept file name which contains information of
//     student and display all names of students whose name starts with the
//         letter P

/* class Student
{
private:
    int RollNO;
    char Name[10];
    char Batch[10];
    int Fee;
    int fd = 0, fd1 = 0, iRet = 0, iSum = 0;
    char Buffer[100] = {'\0'};
    char Brr[50] = {'\0'};
    // char Buffer1[100] = {'\0'};

public:
    Student()
    {
        int RollNO = 0;
        char Name[10] = {'\0'};
        char Batch[10] = {'\0'};
        int Fee = 0;
    }
    void Write(char *Arr)
    {
        fd = open(Arr, O_WRONLY | O_CREAT, 0777);
        if (fd == -1)
        {
            cout << "\nFile Not opene\n";
        }
        else
        {
            cout << "\nFile open Succesfully\n";
            cout << "Enter No Of Students\n";
            cin >> iRet;
            for (int i = 1; i <= iRet; i++)
            {

                cout << "Enter Roll No\n";
                cin >> RollNO;

                cout << "Enter Name\n";
                scanf(" %[^'\n']s", Name);

                cout << "Enter Batch\n";
                scanf(" %[^'\n']s", Batch);

                cout << "Enter Fee\n";
                cin >> Fee;

                write(fd, (char *)this, sizeof(*this));
            }
        }
        close(fd);
    }
    void fileread(char *Arr)
    {
        int fd = 0;
        int ret = 0;
        fd = open(Arr, O_RDONLY);
        if (fd == -1)
        {
            cout << endl
                 << "File Cant Open" << endl;
        }

        cout << endl
             << "data from file is: \n";

        while ((ret = read(fd, (char *)this, sizeof(*this))))
        {
            if ((*Name == 'p'))
            {
                cout << endl
                     << Name << endl;
            }
           
        }

        close(fd);
    }
};

int main()
{
    Student obj;
    char Arr[50] = {'\0'};
    cout << "\nEnter File Name\n";
    gets(Arr);
    obj.Write(Arr);
    obj.fileread(Arr);
}
 */

// 4. Write a program which accept file name which contains information of
// student and display names of all students whose length of the name is 6.

/* class Student
{
private:
    int RollNO;
    char Name[10];
    char Batch[10];
    int Fee;
    int fd = 0, fd1 = 0, iRet = 0, iSum = 0;
    char Buffer[100] = {'\0'};
    char Brr[50] = {'\0'};
    int iret = 0;
    // char Buffer1[100] = {'\0'};

public:
    Student()
    {
        int RollNO = 0;
        char Name[10] = {'\0'};
        char Batch[10] = {'\0'};
        int Fee = 0;
    }
    void Write(char *Arr)
    {
        fd = open(Arr, O_WRONLY | O_CREAT, 0777);
        if (fd == -1)
        {
            cout << "\nFile Not opene\n";
        }
        else
        {
            cout << "\nFile open Succesfully\n";
            cout << "Enter No Of Students\n";
            cin >> iRet;
            for (int i = 1; i <= iRet; i++)
            {

                cout << "Enter Roll No\n";
                cin >> RollNO;

                cout << "Enter Name\n";
                scanf(" %[^'\n']s", Name);

                cout << "Enter Batch\n";
                scanf(" %[^'\n']s", Batch);

                cout << "Enter Fee\n";
                cin >> Fee;

                write(fd, (char *)this, sizeof(*this));
            }
        }
        close(fd);
    }
    void fileread(char *Arr)
    {
        int fd = 0;
        int ret = 0;

        fd = open(Arr, O_RDONLY);

        if (fd == -1)
        {
            cout << endl
                 << "File Cant Open" << endl;
        }

        cout << endl
             << "data from file is: \n";

        while ((ret = read(fd, (char *)this, sizeof(*this))))
        {
            char *q = Name;
            while (*q != '\0')
            {
                iret++;
                q++;
            }
            if (iret <= 6)
            {
                cout << endl
                     << iret << "->"
                     << Name << endl;
            }
        }

        close(fd);
    }
};

int main()
{
    Student obj;
    char Arr[50] = {'\0'};
    cout << "\nEnter File Name\n";
    gets(Arr);
    obj.Write(Arr);
    obj.fileread(Arr);
}
 */

// 5. Write a program which accept file name which contains information of
//     student and marks.Display all students having that marks.

/* class Student
{
private:
    int RollNO;
    char Name[10];
    char Batch[10];
    int Fee;
    int fd = 0, fd1 = 0, iRet = 0, iSum = 0;
    char Buffer[100] = {'\0'};
    char Brr[50] = {'\0'};
    int iret = 0;
    // char Buffer1[100] = {'\0'};

public:
    Student()
    {
        int RollNO = 0;
        char Name[10] = {'\0'};
        char Batch[10] = {'\0'};
        int Fee = 0;
    }
    void Write(char *Arr)
    {
        fd = open(Arr, O_WRONLY | O_CREAT, 0777);
        if (fd == -1)
        {
            cout << "\nFile Not opene\n";
        }
        else
        {
            cout << "\nFile open Succesfully\n";
            cout << "Enter No Of Students\n";
            cin >> iRet;
            for (int i = 1; i <= iRet; i++)
            {

                cout << "Enter Roll No\n";
                cin >> RollNO;

                cout << "Enter Name\n";
                scanf(" %[^'\n']s", Name);

                cout << "Enter Batch\n";
                scanf(" %[^'\n']s", Batch);

                cout << "Enter Fee\n";
                cin >> Fee;

                write(fd, (char *)this, sizeof(*this));
            }
        }
        close(fd);
    }
    void fileread(char *Arr)
    {
        int fd = 0;
        int ret = 0;

        fd = open(Arr, O_RDONLY);

        if (fd == -1)
        {
            cout << endl
                 << "File Cant Open" << endl;
        }

        cout << endl
             << "data from file is: \n";

        while ((ret = read(fd, (char *)this, sizeof(*this))))
        {
            cout << endl
                 << "Student Name"
                 << "\t"
                 << "Student Fee" << endl;
            cout << endl
                 << Name << "\t\t" << Fee << endl;
        }

        close(fd);
    }
};

int main()
{
    Student obj;
    char Arr[50] = {'\0'};
    cout << "\nEnter File Name\n";
    gets(Arr);
    // obj.Write(Arr);
    obj.fileread(Arr);
}
 */

//---------------------------------------Logic Building Assignment : 52

// 1. Write a program which accept file name which contains information of
// student and display the information of student having highest marks.

/* class Student
{
private:
    int RollNO;
    char Name[10];
    char Batch[10];
    int Fee;
    int fd = 0, fd1 = 0, iRet = 0, iSum = 0;
    char Buffer[100] = {'\0'};
    char Brr[50] = {'\0'};
    int iret = 0;
    // char Buffer1[100] = {'\0'};

public:
    Student()
    {
        // int RollNO = 0;
        //  char Name[10] = {'\0'};
        //  char Batch[10] = {'\0'};
        int Fee = 0;
    }
    void Write(char *Arr)
    {
        fd = open(Arr, O_WRONLY | O_CREAT, 0777);
        if (fd == -1)
        {
            cout << "\nFile Not opene\n";
        }
        else
        {
            cout << "\nFile open Succesfully\n";
            cout << "Enter No Of Students\n";
            cin >> iRet;
            for (int i = 1; i <= iRet; i++)
            {

                cout << "Enter Roll No\n";
                cin >> RollNO;

                cout << "Enter Name\n";
                scanf(" %[^'\n']s", Name);

                cout << "Enter Batch\n";
                scanf(" %[^'\n']s", Batch);

                cout << "Enter Fee\n";
                cin >> Fee;

                write(fd, (char *)this, sizeof(*this));
            }
        }
        close(fd);
    }
    void fileread(char *Arr)
    {
        int fd = 0;
        int ret = 0;
        int i = 0;

        fd = open(Arr, O_RDONLY);

        if (fd == -1)
        {
            cout << endl
                 << "File Cant Open" << endl;
        }

        cout << endl
             << "data from file is: \n";

        while ((ret = read(fd, (char *)this, sizeof(*this))))
        {
            if (Fee > i)
            {
                i = Fee;
            }
        }
    }
};

int main()
{
    Student obj;
    char Arr[50] = {'\0'};
    cout << "\nEnter File Name\n";
    gets(Arr);
    //   obj.Write(Arr);
    obj.fileread(Arr);
}
 */