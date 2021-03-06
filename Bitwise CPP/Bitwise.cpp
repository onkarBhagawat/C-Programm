#include <stdio.h>
//<<<<<<<<<<<<<<<<<<1 display  and count BINARY number>>>>>>>
/* void Display(int i)
{
    int j = 0;
    int k = 1;
    int p = 0;
    if (i < 0)
    {
        i = -i;
    }

    while (i != 0)
    {

        k++;
        j = i % 2;
        if ((k == 4) && (j == 1))
        {
            printf("true");
        }
        else
        {
            printf("false");
        }
        /// printf("%d ", j);
        i = i / 2;
        //printf("\n%d ", i);
        // if (j == 1)
        // {
        //     k++;
        // }
    }

    //printf("\n%d ", k);
}
int main()
{
    int i = 0;
    printf("Enter youre nuber");
    if (i < 0)
    {
        i = -i;
    }
    scanf("%d", &i);
    Display(i);
    return 0;
}
 */
/////////////////pericular bit is on or off////////
/* #define TRUE 1
#define FALSE 0
typedef int BOOL;
int Display(int i)
{
    int j = 0;
    int k = 0;
    int p = 0;
    if (i < 0)
    {
        i = -i;
    }

    while (i != 0)
    {
        j = i % 2;
        k++;
        if ((k == 4))
        {
            break;
        }
        i = i / 2;
    }
    if ((k == 4) && (j == 1))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    int iret = 0;
    int i = 0;
    printf("Enter youre nuber");
    if (i < 0)
    {
        i = -i;
    }
    scanf("%d", &i);
    iret = Display(i);
    if (iret == TRUE)
    {
        printf("ON");
    }
    else
    {
        printf("OFF");
    }

    return 0;
}
 */

//    Problem statement :
//  Accept number from user and check whether fourth bit is on or off.

//  Input :   43                     Binary :    1   0   1   0   1   1       (1+2+8+32)
//  Output : TRUE

//  Input :   35                     Binary :    1   0   0   0   1   1       (1+2+32)
//  Output : FALSE

/* #include <stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckBit(int iNo)
{
    int iMask = ////////0X00000E00 for 10,11,12 ///////////0X0000860  for bit 6th 7th 12th
    ; ///////////0X0080000; //for 24 bit
    //int iMax1 = ;

    int iResult = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    iResult = iNo & iMask;

    if (iResult == iMask)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    int iNo = 0;
    BOOL bRet = FALSE;

    printf("Enter number\n");
    scanf("%d", &iNo);

    bRet = CheckBit(iNo);
    if (bRet == TRUE)
    {
        printf("Fourth bit is on\n");
    }
    else
    {
        printf("Fourth bit is Off\n");
    }
    return 0;
}
 */
/* /////////////////dynamicaly msk///////
#include <stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckBit(int iNo, int ino2)
{
    int iMask = 0X00000001;

    int iResult = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    if ((ino2 < 1) || (ino2 > 32))
    {
        return FALSE;
    }
    iMask = iMask << (ino2 - 1);
    iResult = iNo & iMask ;

    if (iResult == iMask)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    int iNo = 0;
    int ino2 = 0;
    BOOL bRet = FALSE;

    printf("Enter number\n");
    scanf("%d", &iNo);
    printf("Enter position\n");
    scanf("%d", &ino2);

    bRet = CheckBit(iNo, ino2);
    if (bRet == TRUE)
    {
        printf(" bit is on\n");
    }
    else
    {
        printf(" bit is Off\n");
    }
    return 0;
}
 */

/////////////////dynamicaly msk for toggle /////////

/* #include <stdio.h>

int toggleBit(int iNo, int ino2)
{
    int iMask = 0X00000001;

    int iResult = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    if ((ino2 < 1) || (ino2 > 32))
    {
        return -1;
    }
    iMask = iMask << (ino2 - 1);
    iResult = iNo ^ iMask;
    return iResult;
}
int main()
{
    int iNo = 0;
    int ino2 = 0;
    int bRet = 0;

    printf("Enter number\n");
    scanf("%d", &iNo);
    printf("Enter position\n");
    scanf("%d", &ino2);
    bRet = toggleBit(iNo, ino2);
    printf("%d", bRet);
    return 0;
} */

////////////////Logic Building Assignment : 33

// 1.Write a program which accept one number from user and off 7th bit of that
// number if it is on. Return modified number

/* int Bit(int ino, int ino1)
{
    int iResult = 0;
    if (ino < 0)
    {
        ino = -ino;
    }
    if ((ino1 < 1) || (ino1 > 32))
    {
        return -1;
    }
    int iMax = 0x00000001;
    iMax = iMax << (ino1 - 1);

    iResult = ino ^ iMax;
    return iResult;
}
int main()
{
    int ino = 0;
    int ino1 = 0;
    int iret = 0;
    printf("Enter your nubmer\n");
    scanf("%d", &ino);
    printf("Enter your bit \n");
    scanf("%d", &ino1);
    iret = Bit(ino, ino1);
    printf("Modify Number is %d", iret);
}
 */
// 2. Write a program which accept one number from user and off 7th and 10th
// bit of that number. Return modified n

/* int Bit(int ino)
{
    int iResult = 0;
    if (ino < 0)
    {
        ino = -ino;
    }
    int iMax = 0X00000240;
    iResult = iMax & ino;

    return iResult;
}
int main()
{
    int ino = 0;
    int ino1 = 0;
    int iret = 0;
    int ino2 = 0;
    printf("Enter your nubmer\n");
    scanf("%d", &ino);
    iret = Bit(ino);
    printf("Modify Number is %d", iret);
}
 */

// 3. Write a program which accept one number from user and toggle 7th bit of
//     that number.Return modified number.
/* int Bit(int ino, int ino1)
{
    int iResult = 0;
    if (ino < 0)
    {
        ino = -ino;
    }
    if ((ino1 < 1) || (ino1 > 32))
    {
        return -1;
    }
    int iMax = 0X000000001;
    iMax = iMax << (ino1 - 1);
    iResult = iMax ^ ino;

    return iResult;
}
int main()
{
    int ino = 0;
    int ino1 = 0;
    int iret = 0;
    int ino2 = 0;
    printf("Enter your nubmer\n");
    scanf("%d", &ino);
    printf("Enter your bit\n");
    scanf("%d", &ino1);
    iret = Bit(ino, ino1);
    printf("Modify Number is %d", iret);
}
 */
// 4. Write a program which accept one number from user and toggle 7th and
// 10th bit of that number. Return modified number.

/* int Bit(int ino)
{
    int iResult = 0;
    if (ino < 0)
    {
        ino = -ino;
    }
    int iMax = 0X00000240;
    iResult = iMax ^ ino;

    return iResult;
}
int main()
{
    int ino = 0;
    int ino1 = 0;
    int iret = 0;
    int ino2 = 0;
    printf("Enter your nubmer\n");
    scanf("%d", &ino);
    iret = Bit(ino);
    printf("Modify Number is %d", iret);
}
 */

// 5. Write a program which accept one number from user and on its first 4
// bits. Return modified number.

/* int Bit(int ino)
{
    int iResult = 0;
    if (ino < 0)
    {
        ino = -ino;
    }
    int iMax = 0X0000000F;
    iResult = iMax | ino;

    return iResult;
}
int main()
{
    int ino = 0;
    int ino1 = 0;
    int iret = 0;
    int ino2 = 0;
    printf("Enter your nubmer\n");
    scanf("%d", &ino);
    iret = Bit(ino);
    printf("Modify Number is %d", iret);
}
 */

////////////////Logic Building Assignment : 34

// 1.Write a program which accept one number and position from user and
// check whether bit at that position is on or off. If bit is one return TURE
// otherwise return FALSE.
/* #define TRUE 1
#define FALSE 0
typedef int BOOL;
int Check(int ino1, int iPos)
{
    int c = 0;
    int iResult = 0;
    if (ino1 < 0)
    {
        ino1 = -ino1;
    }
    if ((iPos < 1) || (iPos > 32))
    {
        return -1;
    }
    int iMax = 0X00000001;
    iMax = iMax << (iPos - 1);
    iResult = ino1 & iMax;
    if (iResult == iMax)
    {

        c++;
        printf("%d", c);
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    int ino1 = 0, iPos = 0;
    int iret = 0;
    printf("Enter Number and position\n");
    scanf("%d \n %d", &ino1, &iPos);
    iret = Check(ino1, iPos);
    if (iret == TRUE)
    {
        printf(" TRUE Bit is one");
    }
    else
    {
        printf(" FALSE Bit is o");
    }
    return 0;
} */

// 2. Write a program which accept one number and position from user and off
// that bit. Return modified number.

/* int Check(int ino1, int iPos)
{
    int iResult = 0;
    if (ino1 < 0)
    {
        ino1 = -ino1;
    }
    if ((iPos < 1) || (iPos > 32))
    {
        return -1;
    }
    int iMax = 0X00000001;
    iMax = iMax << (iPos - 1);
    iResult = ino1 ^ iMax;
    return iResult;
}
int main()
{
    int ino1 = 0, iPos = 0;
    int iret = 0;
    printf("Enter Number and position\n");
    scanf("%d \n %d", &ino1, &iPos);
    iret = Check(ino1, iPos);
    printf("MODIFY NUMBER IS %d", iret);
    return 0;
} */

// 3. Write a program which accept one number and position from user and on
// that bit. Return modified number.

/* int Check(int ino1, int iPos)
{
    int iResult = 0;
    if (ino1 < 0)
    {
        ino1 = -ino1;
    }
    if ((iPos < 1) || (iPos > 32))
    {
        return -1;
    }
    int iMax = 0X00000001;
    iMax = iMax << (iPos - 1);
    iResult = ino1 | iMax;
    return iResult;
}
int main()
{
    int ino1 = 0, iPos = 0;
    int iret = 0;
    printf("Enter Number and position\n");
    scanf("%d \n %d", &ino1, &iPos);
    iret = Check(ino1, iPos);
    printf("MODIFY NUMBER IS %d", iret);
    return 0;
}
 */

// 4. Write a program which accept one number and position from user and
// toggle that bit. Return modified number.

/* int Check(int ino1, int iPos)
{
    int iResult = 0;
    if (ino1 < 0)
    {
        ino1 = -ino1;
    }
    if ((iPos < 1) || (iPos > 32))
    {
        return -1;
    }
    int iMax = 0X00000001;
    iMax = iMax << (iPos - 1);
    iResult = ino1 ^ iMax;
    return iResult;
}
int main()
{
    int ino1 = 0, iPos = 0;
    int iret = 0;
    printf("Enter Number and position\n");
    scanf("%d \n %d", &ino1, &iPos);
    iret = Check(ino1, iPos);
    printf("MODIFY NUMBER IS %d", iret);
    return 0;
}
 */

// 5. Write a program which accept one number from user and toggle contents
// of first and last nibble of the number. Return modified number. (Nibble is a
// group of four bits)

/* int Check(int ino1, int iPos)
{
    int iResult = 0;
    if (ino1 < 0)
    {
        ino1 = -ino1;
    }
    if ((iPos < 1) || (iPos > 32))
    {
        return -1;
    }
    int iMax = 0X00000001;
    iMax = iMax << (iPos - 1);
    iResult = ino1 ^ iMax;
    return iResult;
}
int main()
{
    int ino1 = 0, iPos = 0;
    int iret = 0;
    printf("Enter Number and position\n");
    scanf("%d \n %d", &ino1, &iPos);
    iret = Check(ino1, iPos);
    printf("MODIFY NUMBER IS %d", iret);
    return 0;
}
 */

//////////////////Logic Building Assignment : 35 .

// 1.Write a program which accept one number from user and count number of
// ON (1) bits in it without using % and / operator.

/* int Check(int ino1)
{
    int i = 0;
    int icnt = 0;
    int iResult = 0;
    if (ino1 < 0)
    {
        ino1 = -ino1;
    }
    int j = 0;
    for (i = 1, j = 32; i <= j; i++, j--)
    {
        int iMax = 0X00000001;
        iMax = iMax << (i - 1);
        iResult = ino1 & iMax;
        if ((iResult == iMax))
        {
            icnt++;
        }
    }

    return icnt;
}
int main()
{
    int ino1 = 0, iPos = 0;
    int iret = 0;
    printf("Enter Number\n");
    scanf("%d", &ino1);
    iret = Check(ino1);
    printf("Number on bit iS %d", iret);
    return 0;
} */

// 2. Write a program which accept two numbers from user and display position
// of common ON bits from that two numbers.

/* int Check(int ino1, int ino2)
{
    int i = 0;
    int icnt = 0;
    int iResult = 0;
    int iResult1 = 0;
    if (ino1 < 0)
    {
        ino1 = -ino1;
    }
    int j = 0;
    for (i = 1, j = 32; i <= j; i++, j--)
    {
        int iMax = 0X00000001;
        iMax = iMax << (i - 1);
        iResult = iMax & ino1;
        iResult1 = iMax & ino2;

        if ((iResult == iMax)) //&& (iResult1 == iMax))
        {
            icnt++;
        }
    }

    return icnt;
}
int main()
{
    int ino1 = 0, iPos = 0;
    int iret = 0;
    int ino2 = 0;
    printf("Enter two Number\n");
    scanf("%d\n %d", &ino1, &ino2);
    iret = Check(ino1, ino2);
    printf("MODIFY NUMBER IS %d", iret);
    return 0;
} */

// 3. Write a program which accept one number from user and check whether
// 9th or 12th bit is on or off.
/* 
typedef int BOOL;
#define TRUE 1
#define FALSE 0
int Check(int ino1)
{
    int iMax = 0X00000100;
    int imax1 = 0X000000800;
    int iResult = 0;
    int iResult1 = 0;
    if (ino1 < 0)
    {
        ino1 = -ino1;
    }
    iResult = ino1 & iMax;
    iResult1 = ino1 & iMax;
    if ((iResult == iMax))
    {
        return TRUE;
    }
    else if (((iResult1 == imax1)))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    int ino1 = 0, iPos = 0;
    int iret = 0;
    int ino2 = 0;
    printf("Enter one Number\n");
    scanf("%d", &ino1);
    iret = Check(ino1);
    if (iret == TRUE)
    {
        printf("Bit is on");
    }
    else
    {
        printf("Bit is OFF");
    }

    return 0;
}
 */
// 4. Write a program which accept one number , two positions from user and
// check whether bit at first or bit at second position is ON or OFF.

/* #define TRUE 1
#define FALSE 0
typedef int BOOL;
int Check(int ino1, int iPos, int Pos1)
{
    int imax = 0, iresult = 0;
    int iResult = 0;
    if (ino1 < 0)
    {
        ino1 = -ino1;
    }
    if ((iPos < 1) || (iPos > 32))
    {
        return -1;
    }
    int iMax = 0X00000001;
    iMax = iMax << (iPos - 1);
    imax = imax << (Pos1 - 1);
    iResult = ino1 & iMax;
    iresult = ino1 & imax;
    if (iResult == iMax)
    {
        return TRUE;
    }
    else if (iresult == imax)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    int ino1 = 0, iPos = 0, pos1 = 0;
    int iret = 0;
    printf("Enter Number and positions\n");
    scanf("%d \n %d\n %d", &ino1, &iPos, &pos1);
    iret = Check(ino1, iPos, pos1);
    if (iret == TRUE)
    {
        printf(" TRUE Bit is one");
    }
    else
    {
        printf(" FALSE Bit is o");
    }
    return 0;
} */

// 5. Write a program which accept one number from user and range of
//     positions from user.Toggle all bits from that range.

/* int Check(int ino1, int iPos, int Pos1)
{
    int imax = 0, iresult = 0;
    int iResult = 0;
    if (ino1 < 0)
    {
        ino1 = -ino1;
    }
    if ((iPos < 1) || (iPos > 32))
    {
        return -1;
    }
    int iMax = 0X00000001;
    for (int i = iPos; i <= Pos1; i++)
    {
        iMax = iMax << (iPos - 1);

        iResult = ino1 ^ iMax;
    }
    return iResult;
}

int main()
{
    int ino1 = 0, iPos = 0, pos1 = 0;
    int iret = 0;
    printf("Enter Number and positions\n");
    scanf("%d\n%d%d", &ino1, &iPos, &pos1);
    iret = Check(ino1, iPos, pos1);
    printf("NEW NUBER IS %d", iret);
    return 0;
} */

//--------------------------Logic Building Assignment : 36-------

// 1. Write a program which accepts 2 strings from user and concat N
// characters of second string after first string.Value of N should be
// accepted from user. (Implement strncat() function).

/* void Strncat(char *Arr, char *Brr, int iNo)
{
    while (*Arr != '\0')
    {
        Arr++;
    }

    while ((*Brr != '\0') && (iNo != 0))
    {
        *Arr = *Brr;
        Arr++;
        Brr++;
        iNo--;
    }
    *Brr='\0';
}
int main()
{
    char Arr[20] = {'\0'};
    char Brr[20] = {'\0'};
    int iNo = 0;
    printf("ENTER STRING\n");
    scanf("%[^'\n]s", Arr);
    printf("ENTER STRING\n");
    scanf(" %[^'\n]s", Brr);
    printf("ENTER NUMBER\n");
    scanf(" %d", &iNo);
    Strncat(Arr, Brr, iNo);
    printf("%s", Arr);

    return 0;
}
 */
// 2. Write a program which 2 strings from user and check whether
// contents of two strings are equal or not. (Implement strcmp()
// function).
/* typedef int BOOL;
#define TRUE 1
#define FALSE 0
int Strncmp(char *Arr, char *Brr)
{
    while ((*Arr != '\0') && (*Brr != '\0'))
    {
        Arr++;
        Brr++;
    }
    if (*Arr == *Brr)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }

   
}
int main()
{
    char Arr[20] = {'\0'};
    char Brr[20] = {'\0'};
    int iNo = 0;
    int iRet = 0;
    printf("ENTER STRING\n");
    scanf("%[^'\n]s", Arr);
    printf("ENTER STRING\n");
    scanf(" %[^'\n]s", Brr);
    iRet = Strncmp(Arr, Brr);
    if (iRet == TRUE)
    {
        printf("Strings Are Same");
    }
    else
    {
        printf("Stings Are Diffreent");
    }

    return 0;
} */

// 3. Write a program which 2 strings from user and check whether first
// N contents of two strings are equal or not. (Implement strcmp()
// function).
/* typedef int BOOL;
#define TRUE 1
#define FALSE 0
int Strncmp(char *Arr, char *Brr, int iNo)
{
    while ((*Arr != '\0') && (*Brr != '\0') && (iNo != 0))
    {
        Arr++;
        Brr++;
        iNo--;
    }
    if ((*Arr == *Brr))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    char Arr[20] = {'\0'};
    char Brr[20] = {'\0'};
    int iNo = 0;
    int iRet = 0;
    printf("ENTER STRING\n");
    scanf("%[^'\n]s", Arr);
    printf("ENTER STRING\n");
    scanf(" %[^'\n]s", Brr);
    printf("ENTER NUMBER\n");
    scanf(" %d", &iNo);
    iRet = Strncmp(Arr, Brr, iNo);
    if (iRet == TRUE)
    {
        printf("Strings Are Same");
    }
    else
    {
        printf("Stings Are Diffreent");
    }

    return 0;
}
 */

// 4. Accept sing from user and reverse the contents of that string by
// toggling the case

/* void ToggleCase(char Arr[])
{
    char Tepm;
    char i = '\0';
    char j = '\0';
    while (Arr[i] != '\0')
    {
        i++;
    }
    i--;
    while (j < i)
    {
        if ((Arr[i] >= 'a') && (Arr[i] <= 'z') || (Arr[j] >= 'a') && (Arr[j] <= 'z'))
        {
            Arr[i] = Arr[i] - 32;
            Arr[j] = Arr[j] - 32;
        }
        else if ((Arr[i] >= 'A') && (Arr[i] <= 'Z') || (Arr[j] >= 'A') && (Arr[j] <= 'z'))
        {
            Arr[i] = Arr[i] + 32;
            Arr[j] = Arr[j] + 32;
        }
        // else if ((j++) == (i--))
        // {
        //     Arr[i] = Arr[i] + 32;
        //     Arr[j] = Arr[j] - 32;
        // }
        else
        {
            Arr[i] = Arr[i];
            Arr[j] = Arr[j];
        }
        Tepm = Arr[i];
        Arr[i] = Arr[j];
        Arr[j] = Tepm;
        j++;
        i--;
    }
}

int main()
{
    char Arr[20] = {'\0'};
    char Brr[20] = {'\0'};
    int iNo = 0;
    int iRet = 0;
    printf("ENTER STRING\n");
    scanf("%[^'\n]s", Arr);
    ToggleCase(Arr);
    printf("%s", Arr);
    return 0;
} */

//5. Accept string from user and check whether the string is palindrome or not without considering its case
typedef int BOOL;
#define TRUE 1
#define FALSE 0
void palindrom(char *Arr, char *Brr)
{

    char *Crr = NULL;
    Crr = Arr;
    char loop = '\0';
    int Start = 0;
    int End = 0;
    while (Arr[Start] != '\0')
    {
        Start++;
    }
    Start--;
    while (End < Start)
    {
        loop = Arr[Start];
        Arr[Start] = Arr[End];
        Arr[End] = loop;
        End++;
        Start--;
    }
    if (Crr == Arr)
    {
        printf("Yes");
    }
    else
    {
        printf("NO");
    }

    // while (*Crr != '\0')
    // {
    //     *Brr = *Arr;
    //     if (*Crr == *Brr)
    //     {
    //         printf("Yes");
    //     }
    //     else
    //     {
    //         printf("NO");
    //     }
    //     Arr++;
    //     Brr++;
    // }
}
int main()
{
    char Arr[20] = {'\0'};
    char Brr[20] = {'\0'};
    int iNo = 0;
    int iRet = 0;
    printf("ENTER STRING\n");
    scanf("%[^'\n]s", Arr);
    palindrom(Arr, Brr);
    printf("%s", Arr);
    // iRet = printf("%s\n", Arr);
    // if (iRet == TRUE)
    // {
    //     printf("yes it is palindrom");
    // }
    // else
    // {
    //     printf("is NOT  palindrom");
    // }

    return 0;
}