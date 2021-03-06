#include<stdio.h>


/*
//(que 1)//
struct demo
{
	int i;
	int j;
	int k;
};
struct demo obj = { 10,20 };
int main()
{
	printf("%d,%d,%d", obj.i, obj.j, obj.k);
	return 0;
}
/*/

/*
//(que 2)//

struct demo
{
	int i;
	int j;
	int k;
};
obj = { ,,20};//error
int main()
{
	printf("%d,%d,%d", obj.i, obj.j, obj.k);
	return 0;
}
/*/

//(que 3)//
/*
struct demo
{
	const int i;
	int j;
	int k;
};
struct demo obj;

int main()
{
	obj.j = 10;
	printf("%d,%d,%d", obj.i, obj.j, obj.k);//0,10,0
	return 0;
}
/**/

/*
//(QUE4 )//
struct demo
{
	const int i;
	int j;
	int k;
}obj = { 10,20,30 };

int main()
{

	obj.j = 11;
	obj.k = 20;
	printf("%d,%d,%d", obj.i,obj.j,obj.k);//10,11,20//
	return 0;
}
/*/

/*
#define MAX 7
struct demo
{
	int a[MAX - sizeof(NULL)];
	int i, j;
}
obj = { {11,12},13,14 };
int main()
{
	printf("%d,%d,%d", obj.a[0], obj.a[2], obj.i);
	return 0;
}
/**/

/*
//(QUE 6)//
struct demo
{
	int* p;
	int i, j;

};
int main()
{
	struct demo obj1, obj2;
	obj2.i = 10;
	obj2.j = 20;
	obj1.p = ((int*)&obj2) + 1;
	printf("%d", ++ * obj1.p);
	return 0;

}
/*/


//(QUE 7))//

//struct demo
//{
//	int i, j;
//	int* p;
//};
//int main()
//{
//	struct demo obj1;
//	obj1.i = 10;
//	obj1.j = 20;
//	obj1.p = ((int*)&obj1) + 1;
//	*obj1.p = 15;
//	printf("%d,%d", obj1.i,obj1.j);
//	return 0;
//
//}
/*/

/*
//(QUE 8)//

struct demo
{
	int i, j;
	struct demo* p;
};
int main()
{
	struct demo obj1;
	obj1.i = 10;
	obj1.j = 20;
	obj1.p = &obj1;
	obj1.p->i = 15;
	(&obj1)->j= 12;
		printf("%d,%d", obj1.i, obj1.j);
}
/*/

/*
//(QUE9)//
struct demo
{
	int i, j;
};

void fun(struct demo*p)
{
p->i++;
}
int main()
{
	struct demo obj1;
	obj1.i = 10;
	obj1.j = 20;
	printf("%d,%d,", obj1.i, obj1.j);
	fun(&obj1);
	printf("%d,%d", obj1.i, obj1.j);
	return 0;
}
/**/

/*
//(QUE10)//
struct demo
{
	int i, j;
	char I;
};
int main()
{
	struct demo obj;
	obj.i = 15;
	obj.I = 45;
	obj.j = 20;
	printf("%d,%d,%d", obj.i, obj.j,obj.I);
	return 0;
}
/*/

/*
//((QUE11)//
struct demo
{
	int i, j;
	struct
	{
		int i, j;
	}obj;
}
obj = { 10,12 };
int main()
{
	obj.j = 12;
	obj.obj.i = 10;
	printf("%d %d %d", obj.i, obj.obj.j,obj.obj.j);
}
/*/
/*
//((QUE12))//
struct demo
{
	int i, j;
}
obj1 = { 10,20,};
obj2 = { 10,20, };
int main()
{
	if (obj1 == obj2)
	{
		printf("objects are equal\n");
	}
	return 0;
}
/*/

/*
//(QUe13)//
struct demo
{
	int i, j;
}
obj1 = { 10,20 };
obj2 = { 10,20 };
int main()
{
	if
		((obj1.i == obj2.i)) &&
		(obj1.j == obj2.j))
		{
		printf("objects are equal\n");
		}
	return 0;
}
/*/
/*
//((que 14)//
struct demo
{
	int i, j;
}obj1 = { 10,20 }, obj2;
int main()
{
	obj2 = obj1;
	if ((obj1.i == obj2.i) && (obj1.j == obj2.j))
	
		{
		printf("object are equals\n");
        }
	return 0;
}
/*/
/*
//((QUE15)//
int no = 10;
struct demo
{
	int i, j;
	int* p;
}obj1={ 10,20,&no },obj2;
int main()
{
	
	prinbtf("%d %d %d\n", obj1.i, obj1.j, *obj1.p);

	++* obj1.p;
	obj1.i = 10;
	printf("%d %d %d\n", obj2.i, obj2.j, *obj2.p);
	return 0;
	
}
/*/
/*
//(QUE16)//
struct demo
{
	int i, j, k, l;
}
obj1 = { 10,20,30,40, };
int main()
{
	printf("%d %d %d %d", (&obj1.i), (&obj1.j), *(&obj1.i + 1), &obj1 + 1);
	return 0;
}
/*/
 
/*
//(que17)//
struct demo
{
	int i;
	int j;
}
obj1 = { 10,20 };
struct demo* fun(struct demo* p)
{
	p->i = p->j - 2;
	obj1 = *p;
	return &obj1;
}
int main()
{
	struct demo* out;
	printf("%d %d\n", obj1.i, obj1.j);//10,20
	out = fun(&obj1);
	printf("%d,%d,%d,%d", obj1.i, obj1.j, out->i, out->j);//18,20,18,20
	return 0;
}
/*/
/*
//(que 18)//
struct demo
{
	char* p;
};
int main()
{
	struct demo out1, out2;
	out1.p = (char*)malloc(20);
	strcpy(out1.p, "marvellous infosystem");
	printf("%s\n", out1.p);
	out2 = out1;
	strlwr(out2.p);
	printf("%s\n,out1.p");
	return 0;

}
/*/
/*
//(que19)//
struct demo
{
	int i;
	char ch;
	int j;
};
int main()
{
	struct demo out;

	if (sizeof(out) == (sizeof(out.i) + sizeof(out.j) + sizeof(out.ch)))
	{
		printf("marvellous");
	}
	else
	{
		printf("infosystem");
	}
	printf("%d",sizeof(out.ch));
	return 0;
}
/*/
/*
#define struct union
struct demo
{
	int i;
	char ch;
	int j;
};
int main()
{
	printf("%d", sizeof(struct demo));
	return 0;
}
/*/
/*
struct demo
{
	int i;
	int j;
	int k;
}obj = 

int main()
{
	printf("%d,%d,%d", obj.i, obj.j, obj.k);
	return 0;
}
/*/

struct demo
{
	int y;
}obj;
int main()
{
	 struct demo obj;
	printf("%d", sizeof(obj));
}