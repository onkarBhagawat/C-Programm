#include<stdio.h>
/*
int main()
{
	int a, b, c;
	printf("enter two numbers");
	scanf_s("%d %d", &a, &b);
	c = a + b;
	printf("addition %d+ %d is %d",a,b ,c);
	return 0;

}
/*/
/*
int main()
{
	int a = 0;
	float b = 0;
	printf("enter radiu of circle");
	scanf_s("%d", &a);
	b = 3.14 * a * a;
	
	printf("area of cicle is:%f", b);
	return 0;
}
/*/
/*
//swaping the number//
int main()
{
	int i, j, k = 0;
	printf("enter no");
	scanf_s("%d %d", &i, &j);
	k = i;
	j = k;
	printf("%d", k);
	return 0;
}
/*/
// find even no with using & bitwise operator//
//find even odd no uing  onther property//
/*
int main()
{
	int a = 0;
	printf("enter the no");
	scanf_s("%d", &a);
	//if (a & 1)
	if(a/2*2==a)
	//	printf("odd number");
				printf("even number");

	else
		//printf("even no");
				printf("odd no");

}
/*/

/*
int main()
{
	int a, b, c, k = 0;
	printf("enter three no");
	scanf_s("%d%d%d", &a, &b, &c);
	
	if (a > b&& a > c)
	
	{
		k = a;
		printf("%d",k);
	}
	if (b > c&& b > a)
	{
		k = b;
		printf("%d",k);
	}
	if (c > a&& c > b)
	{
		k = c;
		
	}

		printf("greter no is:%d", k);
	
}
/*//////////////////////////////or
/*
int main()
{
	int a, b, c, k = 0;
	printf("enter three no");
	scanf_s("%d%d%d", &a, &b, &c);
	if (a > b)
	{
		if (a > c)
			k = a;
		else
			k = c;
	}
	else
	{
		if (b > c)
			k = b;
		else
			k = c;
	}
	printf("greter no is:%d", k);
	return 0;
}
/*/
/*
int main()
{
	int a, b, c, k = 0;
	printf("enter three no");
	scanf_s("%d%d%d", &a, &b, &c);
	k = (a > b) ? (a > c) ? a : c : (b > c) ? b : c;
	
	printf("greter no is:%d", k);
	return 0;
}
/*/

/*
////find root of quadratic equation/////

int main()
{
	int i, j, k, e = 0;
		float x, y = 0;
	printf("enter the coefficient of x^2,x and constant terms");
	scanf_s("%d %d %d", &i, &j, &k);
	e = j * j - 4 * i * k;
	if (e < 0)
		printf("boths roots are imaginary");
	if (e == 0)
	{
		printf("both roots are equal");
		x = -j / (2* i);
		printf("roots are %f", x);
	}
	if (e > 0)
	{
		printf("roots are real and imaginarly");
		x = (-j + (sqrt(e)) / (2 * i));
		y = (-j - sqrt(e)) / (2 * i);
		printf(" roots are %f %f",x, y);


	}
}
/*/ 

/*
//leap year program

int main()
{
	int year = 0;
	printf("enter the year");
	scanf_s("%d", &year);
	if (year % 4)
		printf("is not a leap year");
	else if (year % 100)
		printf("is a leap yer");
	else if (year % 400)
		printf("is not a leap year");
	else
		printf("is a leap yar");


}
/*/

/*
//even naturel nuber//

int main()
{
	int o ,i= 0;
	printf("enter the nuber");
	scanf_s("%d", & o);
	for (i = 1; i<=o; i++)
	{
		if (i % 2 == 0)
		printf(" %d", i);
	}

}
/*/
/*
//find sum of 1st natural number.//
void fun(int);
int main()
{
	int i= 0;
	printf("enter the n number");
	scanf_s("%d", &i);
	fun(i);
}
void fun(int ino)
{
	int j = 0;
		int k = 1;
	for (j = 1; j <= ino; j++)
	{
		//k = k + j;//sum
		k = k * j;//product

	}
	printf(" sum is %d", k);
}
/**/
/*
//factor on n number//

void fun(int);
int main()
{
	int i = 0;
	printf("enter the n number");
	scanf_s("%d", &i);
	fun(i);
}
void fun(int ino)
{
	int j = 0;
	int k = 1;
	for (j = ino; j >=1; j--)//(factorial)
	{
		//k = k + j;//sum
		//k = k * j;//product
	}
	printf(" sum is %d", k);
}
/*/

/*
//sum off even  & odd natural  no//

void fun(int);
int main()
{
	int i = 0;
	printf("enter the n number");
	scanf_s("%d", &i);
	fun(i);
}
void fun(int ino)
{
	int j = 0;
	int k = 1;
	int l = 0;
	for (j = 1; j <= ino; j++)
	{
		//k = 2 * j;//even
		k = (2 * j - 1);//oddd
		printf("%d \n", k);
		l = l + k;
		
	}
	printf("the sum is%d",l);
}
/*/

/*
//calculate x power y in c//

void fun(int,int);
int main()
{
	int x,y= 0;
	printf("enter the n number");
	scanf_s("%d %d", &x,&y);
	fun(x,y);
}
void fun(int ino ,int ino1)
{
	int j = 1;
	int k = 1;
	int l = 0;
	do
	{
		k = ino * k;
		j++;
	} while (j <= ino1);
	printf("%d", k);
}
/**/

/*
///count digit of any number and there sum///


int main()
{
	long int x,r, s = 0;
	printf("enter the number");
	scanf_s("%d", &x);
	while (x != 0)
	{
		//r	 = x % 10;
		//s = s + r;	
		x = x / 10;
		s++;
		
	}
	printf("sum of the didgitsis %d", s);
}
/*/

//find LCM///
/*
int main()
{
	int o, p, q ,i= 0;
	printf("enter two number");
	scanf_s("%d %d", &o,&q);
	for (i = o>q?o:q; i >= o * q; i--)
	{
		if ((i % o == 0) && (i % q == 0)	)
			break;
	}
	printf("LCM is %d ", i);

}		
  /*/             

                                    //problems on operator///
/*
int main()
{
	//int i = 10 + 3 * 8 / 2 - 3 + 2;
	//int j = 10 * 3 / 2 * 3 * 5 * 2;
	int p = (10,20,30,52);
	//int k = sizeof(p = p - 2) + 32;
	printf("%d ",p);
	return 0;
}
/*/
/*
int fun()
{
	return (10, 20, 30, 40);
}
int gun()
{
	return 10, 20, 30, 40;
}
/*/

/*
int main()

{
	int i =30 , j = 20;//, ans;
//	ans = (++j || --i) && (++j||--i);
	printf("%d \n%d  %d %d",i/j,-i/j,i/-j,-i/-j);
	return 0;

}
/*/

/*/
/*
int main()
{
	int no = 10;
	printf("%d %d %d", ~no, !no, ~no + 1);;
	return 0;
}
/*/
/*
int main()

{
	int i =30, j =20 ;//, ans;
//	ans = (++j || --i) && (++j||--i);
	printf("%d \n%d  %d %d", i%j, -i % j, i % -j, -i % -j);
	return 0;
}
/*/
/*
int main()
{
	int i = 21, j = 10, k = 11, ans;
	ans = i > j < k;
		printf("%d \n%d  %d %d", i,j,k,ans);
	return 0;
}
/*/
/*
int main()
{
	int i = 21, j = 10, k = 11;
	(i == 21) ? ((i<20) ? (--j) : (k = 30)) : (k--);
	printf("%d  %d %d", i, j, k);
	return 0;
}
/*/
/*
int main()
{
	int i = 21, j = 10, k = 11;
	i = j = k = 3 - 3;
printf("%d  %d %d", i, j, k);
	return 0;
}
/*/

/*
int main()
{
	int i, j, k;
	k = 2;
	j = --k;
	i = - -k;
	printf("%d   %d %d", i, j, k);
	return 0;
}
/*/

/*
int main()
{
	float f = 2.12;
	if (f > 2.12)
	{
		printf("omi");
	}
	else
		printf("me");
	return 0;
}
/*/

/*
int main()
{
	int i = 200, j = 20;
	
	printf("%d  %d %d", i|j<<2,i&~j,i);
	return 0;
}
/*/

/*
int main()
{
	int i = 10, j = 20;
	
	printf("%d\n %d\n %d",i||j,i&=j,(2,3,1,4));
	return 0;
}
/*/

/*
int main()
{
	int i = 4, j = 7;
	j = j || i++ && printf("hello");
	printf("%d\n %d\n ", i,j);
	return 0;
}
/*/

/*
int main()
{
	int i = 4, j = 7;
	j = j || i++ && printf("hello");
	printf("%d\n %d\n ", i, j);
	return 0;
}
/*/

/*
int main()
{
	int i = 3, * j, k;
	j = &i;
	printf("%d\n", i * *j * i + *j);
}
/*/