#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <io.h>
#include <iostream>
using namespace std;

/* int main()
{
    char name[20] = {'\0'};
    int fd = 0;

    printf("ENTER FILE NAME\n");
    scanf("%s", name);
    fd = open(name, O_RDWR);
    if (fd == -1)
    {
        printf("unable to open file \n");
    }
    else
    {
        printf("file open with fd %d\n", fd);
    }
    close(fd);
    return 0;
} */
////////////////APLIICATION CREAT FILE////////////
/* int main()
{
    char name[20] = {'\0'};
    int fd = 0;

    printf("ENTER FILE NAME\n");
    scanf("%s", name);

    fd = creat(name, 0777);
    if (fd == -1)
    {
        printf("unable to ctrat file \n");
    }
    else
    {
        printf("file ctrated with fd %d\n", fd);
    }
    close(fd);
    return 0;
} */
//////////////////////////File CREAT AND OPEN////////////////
/* int main()
{
    char name[20] = {'\0'};
    int fd = 0;

    printf("ENTER FILE NAME\n");
    scanf("%s", name);
    fd = open(name, O_RDWR | O_CREAT,0777);
    fd = creat(name, 0777);
    if (fd == -1)
    {
        printf("unable to ctrat file \n");
    }
    else
    {
        printf("file ctrated with fd %d\n", fd);
    }
    close(fd);
    return 0;
} */
//////////////////creak,open ANd write////////
/* int main()
{
    char name[20] = {'\0'};
    int fd = 0;
    char Arr[20] = {'\0'};
    int length = 0, ret = 0;

    printf("ENTER FILE NAME\n");
    scanf("%s", name);
    fd = open(name, O_RDWR | O_CREAT, 0777);
    fd = creat(name, 0777);
    if (fd == -1)
    {
        printf("unable to ctrat file \n");
    }
    else
    {
        printf("file ctrated with fd %d\n", fd);
    }
    printf("enter the data you wnat to type\n");

    scanf(" %[^'\n']s", Arr);

    length = strlen(Arr);

    ret == write(fd, Arr, length);

    if (ret == -1)
    {
        printf("Aneble to open file\n");
    }
    else
    {
        printf("DATA Sucessfuly Fil up\n");
    }

    close(fd);
    return 0;
} */

/////////creat open write rite/////
/* int main()
{
    char name[20] = {'\0'};
    int fd = 0;
    char Arr[20] = {'\0'};

    int length = 0, ret = 0;
    printf("ENTER FILE NAME\n");
    scanf("%s", name);
    fd = open(name, O_RDWR | O_CREAT, 0777);
    fd = creat(name, 0777);
    if (fd == -1)
    {
        printf("unable to craet file \n");
    }
    else
    {
        printf("file creat with fd %d\n", fd);
    }
    printf("enter the data you wnat to type\n");

    scanf(" %[^'\n']s", Arr);

    length = strlen(Arr);

    ret == write(fd, Arr, length);

    if (ret == -1)
    {
        printf("Aneble to open file\n");
    }
    else
    {
        printf("DATA Sucessfuly Fil up\n");
    }
    ret = read(fd, Arr, length);
    if (ret == -1)
    {
        printf("Aneble to raed file\n");
    }
    else
    {
        printf("DATA succesfully raed\n");
    }

    printf("MY data is: %s\n", Arr);

    close(fd);
    return 0;
} */

////////////APLIICATION WHICH ACCEPTS AND DISPLAY WHOLE SCREEN ON CONSOLE////

/* void DisplayWholeFile(char *Arr)
{
    int fd = 0;
    // char Brr[500] = {'\0'};
    int ret = 0;
    fd = open(Arr, O_RDONLY);
    if (fd == -1)
    {
        printf("UNABLE TO OPEN FILE\n");
        return;
    }
    else
    {
        printf("\nDATA FROM THE FILE:\n");
        while ((ret = read(fd, Arr, 20)) != 0)
        {
            write(1, Arr, ret);
            printf("\nDATA FROM THE FILE:\n %s", Arr);
        }
    }
    close(fd);
}

int main()
{
    char Arr[10] = {'\0'};
    printf("ENTER FILE NAME\n");
    scanf(" %[^'\n']s", Arr);
    DisplayWholeFile(Arr);
} */

///////////////COPY THE CONTAIN ONE FILE TO ONTHER FILE//////
/* 
class Demo
{
private:
    int fd1 = 0, i = 0;
    int fd2 = 0, iret = 0;
    char Mug[100] = {'\0'};

public:
    void Copy(char *Arr, char *Brr)
    {
        fd1 = open(Arr, O_RDONLY);
        if (fd1 == -1)
        {
            cout << "File Unable To Creat Or Open" << endl;
        }
        else
        {
            cout << "File Craet Or Open Succesfully With Fd:->" << fd1 << endl;
        }

        fd2 = open(Brr, O_RDWR | O_CREAT, 0777);
        if (fd2 == -1)
        {
            cout << "File Unable To Creat Or Open" << endl;
        }
        else
        {
            cout << "File Craet Or Open Succesfully With Fd:->" << fd2 << endl;
            while ((iret = read(fd1, Mug, sizeof(Mug))) != 0)
            {
                cout << "iteration:\t" << i << "\tsize raed\t" << iret << endl;
                i++;
                write(fd2, Mug, iret);
            }
        }
        close(fd1);
        close(fd2);
    }
};
int main()
{
    char Arr[20] = {'\0'};
    char Brr[20] = {'\0'};
    cout << "ENTER FILE NAME\n";
    cin >> Arr;
    cout << "ENTER  DESTINTION FILE NAME\n";
    cin >> Brr;
    Demo obj;
    obj.Copy(Arr, Brr);
}  */

//////// copy And APPEND

/* class Demo
{
private:
    int fd1 = 0, i = 0;
    int fd2 = 0, iret = 0;
    char Mug[500] = {'\0'};

public:
    void CopyAppend(char *Arr, char *Brr)
    {
        fd1 = open(Arr, O_RDWR);
        if (fd1 == -1)
        {
            cout << "File Unable To Creat Or Open" << endl;
        }
        else
        {
            cout << "File Craet Or Open Succesfully With Fd:->" << fd1 << endl;
        }

        fd2 = open(Brr, O_WRONLY | O_APPEND);
        if (fd2 == -1)
        {
            cout << "File Unable To Creat Or Open" << endl;
        }
        else
        {
            cout << "File Craet Or Open Succesfully With Fd:->" << fd2 << endl;
            while ((iret = read(fd1, Mug, sizeof(Mug))) != 0)
            {
                cout << "iteration:\t" << i << "\tsize raed\t" << iret << endl;
                i++;
                write(fd2, Mug, iret);
            }
        }
        close(fd1);
        close(fd2);
    }
};
int main()
{
    char Arr[20] = {'\0'};
    char Brr[20] = {'\0'};
    cout << "ENTER FILE NAME\n";
    cin >> Arr;
    cout << "ENTER  DESTINTION FILE NAME\n";
    cin >> Brr;
    Demo obj;
    obj.CopyAppend(Arr, Brr);
    }
  */

////////////////////FileReadAtPosition//////
/* 
class Demo
{
private:
    int fd1 = 0, i = 0;
    int fd2 = 0, iret = 0;
    char Mug[20] = {'\0'};

public:
    void FileReadAtPosition(char *Arr, int Value)
    {
        fd1 = open(Arr, O_RDONLY);
        if (fd1 == -1)
        {
            cout << "File Unable To Creat Or Open" << endl;
        }
        lseek(fd1, Value, SEEK_CUR);
        iret = read(fd1, Mug, sizeof(Mug));
        cout << "DATA FROME THE FILE:\n";
        write(1, Mug, iret);
        close(fd1);
    }
};
int main()
{
    char Arr[50] = {'\0'};
    int iValue = 0;
    cout << "ENTER FILE NAME\n";
    cin >> Arr;
    cout << "ENTER  THE POSITION \n";
    cin >> iValue;
    Demo obj;
    obj.FileReadAtPosition(Arr, iValue);
}
 */
////////////FileReadAt DYNAMIC Position ///
/* 
 class Demo
{
private:
    int fd1 = 0, i = 0;
    int fd2 = 0, iret = 0;

public:
    void FileReadAtPosition(char *Arr, int Value)
    {
        char *Mug = NULL;
        Mug = (char *)malloc(Value);
        fd1 = open(Arr, O_RDONLY);
        if (fd1 == -1)
        {
            cout << "File Unable To Creat Or Open" << endl;
        }
        lseek(fd1, Value, SEEK_SET);
        iret = read(fd1, Mug, sizeof(Mug));
        cout << "DATA FROME THE FILE:\n";
        write(1, Mug, iret);
        close(fd1);
    }
};
int main()
{
    char Arr[20] = {'\0'};
    char Brr[20] = {'\0'};
    int iValue = 0;
    cout << "ENTER FILE NAME\n";
    cin >> Arr;

    cout << "ENTER  THE POSITION \n";
    cin >> iValue;
    Demo obj;
    obj.FileReadAtPosition(Arr,  iValue);
} 
 */

///
struct Student
{
    int rollno;
    char name[20];
    int marks;
};
class Demo
{
private:
    int fd = 0, fd1 = 0, iRet = 0, Length = 0, c = 0;
    struct Student sobj;

public:
    void Write(char *Arr)
    {
        fd = open(Arr, O_WRONLY | O_APPEND);
        if (fd == -1)
        {
            cout << "File Unable To Creat Or Open" << endl;
        }

        cout << "ENTER NO OF STUDENTY\n";
        cin >> iRet;
        for (int i = 1; i <= iRet; i++)
        {
            cout << "ENTER ROLL NO\n";
            cin >> sobj.rollno;

            cout << "ENTER Nmae of student\n";

            scanf(" %[^'\n]s", &(sobj.name));

            cout << "ENTER Marks\n";

            cin >> sobj.marks;

            write(fd, &sobj, sizeof(sobj));
        }
    }

    void Read(char *Arr)
    {
        fd1 = read(fd, &sobj, O_RDONLY);
        if (fd == -1)
        {
            cout << "File Unable To Creat Or Open" << endl;
        }

        while ((iRet = read(fd, &sobj, sizeof(sobj))) != 0)
        {

            cout << endl
                 << "ROLL NO is\t"
                 << sobj.rollno << endl;

            cout << "ENTER Nmae of student\t"
                 << sobj.name << endl;

            cout << "ENTER Marks\t"
                 << sobj.marks << endl;

            write(1, &sobj, iRet);
         
        }
        close(fd1);
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
    obj.Write(Arr);
    obj.Read(Arr);

    return 0;
}
