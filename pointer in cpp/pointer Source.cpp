#include<stdio.h>

/*


//(Que 1)//
int main()
{
	int no = 10;
	int* p, * q;
	p = &no;
	q = p;
	printf("%d %d",p,q);//10
	return 0;
}
/*/

/*
//(que 2)//
int main()
{
	int no = 11;
	int* p,* q;
	p = &no;
	q = p;
	printf("%d %d", *p,*q);
	return 0;
}
/*/

/*
//(que 3)//
int main()
{
	int no = 21;
	int* p, * q;
	p = &no;
	q = p;
	printf("%d", *p + *q);
	return 0;
}
/*/

/*
//(Que 4)//
int main()
{
	char ch ='M';
	char* p = &ch;
	printf("%d %d %d %d", sizeof(ch),
	sizeof(&ch), sizeof(p), sizeof(*p));
	return 0;
}
/*/

/*
//(que 5)//

int main()
{
	float f = 3.12;
	float* p = &f;
	*p = 6.12;
	printf("%f %f",f,*p);

	return 0;
}
/*/
/*
//(que 6)//
int main()
{
	int no = 11;
	int no2 = 12;
	int* p = &no;
	int* q = &no2;
	printf("%d", *p - *q);

}
/*/

//(que7)//
/*
int mian()
{
	int  no = 10;
	int* p = &no;
	char ch = 'a';
	char* q = &ch;
	float f = 3.12f;
	float* r = &f;
	double d = 6.12;
	double* x = &d;
	printf("%d %d %d %d", sizeof(p),sizeof(q),sizeof(r),sizeof (x));
	return 0;
}
/*/

/*
//(que8)//
int no= 11;
void fun(int* p)//, int q)
{
	*p = 21;
	p = &no;
	*p = 5;

}
int main()
{
	int  no1 = 10;//, no2 = 10;
	int no = 10;
	//* r;
   int *p =&no;
  int **q =&p;
  int*** r = &q;
  //*p++;
	fun(&no1);//, no2);
	printf("%d %d %d", *p,**q,***r);
	return 0;
}
/*/
/*
//(que 13)
int no1 = 10;
int * fun(int no)
{
	no1 = no1 + no;
	return &no1;
}
int main()
{
	int * p = NULL;
p = fun(10);
	printf("%f", *p);
	return 0;
}
/*/

/*
//(que 14)//

int main()
{
	int i = 20;
	int* p = &i;
	if (p == &i)
	{
		printf("marvellous infosystem");
		return 0;
	}

}
/*/

/*
//(que)15//
int main()
{
	int no = 2048;
	char* p = (char*)&no;
	printf("%d", *p);
	return 0;
}
/*/

/*
//(que 16)//
int main()
{
	int no = 21;
	char* p = (char*)&no;
	printf("%d\n", *p);
	*p = 1;
	printf("%d", no);
	return 0;
}
/*/

/*
//(que 17)//
int main()
{
	int arr[] = { 10,20,30 };
	int* p = &(arr[1]);
	printf("%d",  *(p+1));
	printf("%d",  arr[1]+1);
	printf("%d", arr[2]);
	return 0;
 }
 /*/

/*
//(que 18)//
int main()
{
	int no = 10;
	int* p = &no;
	int** q = &p;
	int*** r = &q;
	int**** a = &r;
	int***** b = &a;
	int****** c = &b;

	printf("%d,", no);
	printf("%d,", &no);
	printf("%d,", *p);
	printf("%d,", **a);
	printf("%d,", &(***b));
	printf("%d,", *****c);
	printf("%d,", ***(&b));
	printf("%d,", &(**r));
	printf("%d,", ******c);
	printf("%d,", ***r * *****b);
	printf("%d", ******c + *****b);
	return 0;
}
/*/

/*
//(que 19)//
int main()
{
	char a[] = { 'a', 'e', 'l', 'o', 'm', 'u', 'r', 's', 'v' };
	char* p = a;
	char* q = &(a[4]);
	char* r = &(a[8]);

	//printf("%c %c %c %c %c", a[4], *(a), *(q + 2), *r, *(a + 1));
	printf("%c %c %c %c %c",a[2], 2[a],  *(p + 3), *(r-1), *(q +2- 1));
	return 0;
}
/*/
/*
//(que 20)//
struct demo
{
	int arr[4];
	int a;
}obj = { 10,20,30,40,50 };
int main()
{
	int* p = (int*)&obj;
	struct demo* q = &obj;
	int* r = &(q->arr[2]);

//	printf("%d %d %d", *(p + 3),obj.a,*r);
//printf("%d %d %d %d", * (p + 3),
	//* (obj.arr + 3), * (r + 1),
	// *((q->arr) + 3));
//printf("%d",obj.arr([2]));
	return 0;
}
/*/
