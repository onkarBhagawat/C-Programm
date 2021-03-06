#include<stdio.h>

/*
(QUE 1)
int i = 10;
void fun()
{
	printf("%d\n", i);// i=10 is valid only for tht scop{}

}
int main()
	{
    printf("%d\n", i);
           i = i + 11;  //i=21 is valid for only tht scop{
           fun();
           printf("%d\n", i);// so ans will be 21}
           return 0;
       
	}
    */




/*
    ///(QUE 2)////

    int i=10;
    void fun()
    {
        printf("%d\n", i);// 10
    }
    int main()
    {
        int i = 22;
        printf("%d\n", i);//22
        i = i + 11;
        fun();//10
        
        printf("%d\n", i);//33
        

        return 0;

    }
    */


/*
//(que3)//

int i = 50;
void fun()
{
    printf("%d\n",i);// (not allowd is need to be declear like int i=10,so we 1st decled above)
}
int main()
{
    int i = 10;
    printf("%d\n", i);
    i = i + 11;
    fun();
    printf("%d\n", i);
    return 0;

}
/**/


/*

//(QUE4)//


int i = 22;
static int j = 10;
int main()
{
    
    printf("%d\n", i);
    void fun();
    {
        printf("%d%d\n", i, j);//22,10

    }

}
/*/

/*

//(QUE 5)//
 
int i = 11;
int main()
{
    int  i = 21;// we cant redefine veriabl in same function
    extern int i;
    i = 51;
    printf("%d\n", i);
    return 0;

}
/*/


/*
//(QUE 6)//

int main()
{
    extern int i;
    i = 51;
   
    printf("%d", i);
    printf("%d\n", i);
    
}
int i = 11;
/*/

/*
//(QUE 7)//
int main()
{
    extern int i;
    i = 21;
    printf("%d", i);

 }
 /*/

/*
 //(QUE8)//


extern void fun();
extern int i;

int main()
{
    i = 21;
    printf("%d\n", i);
    fun();
    return 0;

}
/*/

/*
//(que 9)//

extern void fun();
extern int j;
int main()
{
    j = 21;
    printf("%d\n", j);
    fun();
    return 0;

}
/*/


/*
//(10 que)//

void fun()
{
    printf("fun of first_file.c\n");
}

int i = 21;

int main()

{
    printf("%d", i);
    fun();
    return 0;
}
/*/




/*/
//(que 11)//

void gun()
{
    
    extern void fun();
    fun();
    printf("gun of the 1st file");
}
int main()
{
    gun();
    return 0;
}
/*/


/*
//(que 12)//


void gun()
{
    printf("gun of the 1st file\n");
    extern void fun();
    fun();
}

int main()
{
    gun();
    void fun();
    {
        printf("fun main file\n");
    }
    return 0;
}

/*/

/*
//(QUE13)//

int main()
{
    int i = 4;
    if (i)
    {
        i--;
        printf("%d\n", i);
        main();
    }
    return 0;
}
/*/


/*
//(QUE14)//

int main()
{
    static int i= 4;
    if (i);
    {
        i--;
        printf("%d\n", i);
        main();
    }
    return 0;
}
/*/

/*

//((que15)//

void fun(static int i)
{
    if (i)
    {
        i--;
        printf("%d\n", i);
        fun(i);
    }
}
int main()
{
    int i = 4;
    fun(i);
    return 0;
}

/*/

/*
//(que16)//

int main()
{
    register int j = 4;
    int* p = &j;
    printf("%d\n", *p);
    printf("%d\n", p);
}
/*/

/*
//(QUE 17)//
int main()
{
    int i = 0;
    for (i = 0; i<5; i++)
    {
        static int j = 5;
        printf("%d\n", i);
        printf("%d\n", j);
    }
    return 0;
}
/*/

/*
//(QUE 18)//
void fun()
{
    printf("dun of the 1st file\n");
}
int main()
{
    extern void gun();
    gun();

}
/*/

/*
//(QUEb 19)/
int main()
{
   extern int j;
    j = 11;
    printf("%d\n",j);
    return 0;
}
extern int i = 15;
/*/

/*
//(QUEb 20)/
extern int i = 10;
int main()
{
    extern int j = 11;// error
    printf("%d\n%d\n", i, j);
    return 0;
}
/*/


  
