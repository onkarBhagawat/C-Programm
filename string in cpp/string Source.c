#include<stdio.h>
#include<string.h>
#include<conio.h>
/*
int main()
{
	printf("%d %d %d", sizeof(NULL), sizeof(&""), sizeof(""));
	return 0;
}
/*/
/*
int main()
{
	char* p = "marvellous";
	char q[] = { "marvellous""onkar"};
	char r[] = "onkar";
	char s[] = { 'o','n','k','\0','a','r' };
	printf("%d %d %d %d \n", sizeof(p), strlen(q), sizeof(r),sizeof(s));
	printf("%d %d %d %d \n", strlen(p), strlen(q), strlen(r), strlen(s));
	printf("%d %d %d %d", strlen(p+3), strlen(&q[2]), strlen(r), strlen(s));


	return 0;
}
/*/


/*
int main()
{
	printf("%d %d %d", sizeof(NULL), sizeof(&""), sizeof(""));
	return 0;
}
/*/

/*
int main()
{
	char* p = "marvellous";
	char q[] = "marvellous";
	char r[] = "onkar";
	char s[] = { 'o','n','k','\0','a','r' };
	printf("%d %d %d %d \n", sizeof(p), sizeof(q), sizeof(r),sizeof(s));
	printf("%d %d %d %d \n", strlen(p), strlen(q), strlen(r), strlen(s));
	printf("%d %d %d %d", strlen(p+3), strlen(&q[2]), strlen(r), strlen(s));


	return 0;
}
/*/

/*
int main()
{
	void* vp;
	char ch = 74;
	char* cp = "jack";
	int j = 65;
	vp =&ch;
	printf("%c\n", *(char*)vp);
	vp = &j;
	printf("%c\n",*(int*)vp);
	vp = cp;
	printf("%s",(char*)vp+1);

}
/*/
/*
int main()
{
	static char* s[] = { "black","white","pink","blue" };//{ "black,white,pink,blue" };
	char** ptr[] = { s + 3,s + 2,s + 1,s };
	char***p;
	p = ptr;
	++p;
	printf("%s", **p + 1);
	printf("%d", sizeof s);

	return 0;
}
/*/
/*
void fun()
{
	int i = 0;
	int p[20];
	printf("enter the name");
	scanf_s("%s", &p[0]);
	//for (i = 0; p[i] != '\0'; i++)
	
		printf("%s", p[i]);
	
}


/*
int main()
{
	int i = 0;
	int arr[10] = { 'o','m','k','a','r','\0'};
	for (i = 0; arr[i] != '\0'; i++)
	{
		printf("%c \n", arr[i]);
	}
	
	
	
		int p[20];
		printf("enter the name");
		scanf_s("%s", &p[0]);
		for (i = 0; p[i] != '\0'; i++)

		printf("%s", p[i]);

	
	return 0;
}
/*/
/*
int main()
{
	int i = 0;
	int p[20];
	printf("enter the name");
	scanf_s("%s", &p[0]);
	//for (i = 0; p[i] != '\0'; i++)
	printf("%s", p);
	return 0;

}
/*/


/*
int main()
{
	void* vp;
	char ch = 74, * cp = "jack";
	int j = 65;
	vp = &ch;
	printf("%c\n", *(char*)vp);
	vp = &j;
	printf("%c\n", *(int*)vp);
	vp = cp;
	printf("%s", (char*)vp+1 );
	return 0;
}
/*/
/*
int main()
{
	static char* s[] = { "black","white","pink","violet" };
	char** ptr[] = { s + 3,s + 2,s + 1,s },
		*** p;
	p = ptr;
	++p;
		printf("%s", **p + 1);
	return 0;
}
/*/

/*
int main()
{
	char* p = "marvellous";
	char q[] = "marvellous";
	//p = "infosystem";
	//*(p + 3) = 'z';
	q[3] = 'z';
	// char q[20] = "infosystem";
	
	printf("%s %s",p , q);
}
/*/
/*
int main()
{
	char* p = "maevwllous""infosystm";
	char *q=15+ "maevwllous""infosystm";
	printf("%s %s", p, q);
	return 0;
}
/*/
/*
int main()
{
    static char* s[] = { "black","white","pink","violet" };
    char** ptr[] = { s + 3,s + 2,s + 1,s },
        *** p;
    p = ptr;
    ++p;
    printf("%s %c %s\n", **p + 1,**(ptr),*(*p-1));
    *--p;
    printf("%s %c %s\n", **p + 1, **(ptr), *(*p - 1));
    *p + 1;
printf("%s %c %s\n", **p + 1, **(ptr), *(*p - 1));

    return 0;
}
/*/

/*
int main()
{
	char* ptr[] = { "abcd"+2,"efghi+3","xyz" };
	char** p[] = { ptr,ptr + 2,ptr + 1 };
	char*** q = p + 3;
	//printf("%c\n",(q));
	printf("%c %c %c", **(ptr)); //, ***p, ***--q);
//	printf("%c %c %c", *++ * ptr, *++ * p, **--q);
	//printf("%s %s %s", ptr[0], ptr[1], ptr[2]);
	return 0;
}
/**/
/*
int main()
{
	char str[50];
	printf("enter yore string");
	gets (srt);
	puts(str);
  }
  /*/


/* int main()
{
	char i;
	FILE * fp;
	char p[100];
	fp = fopen("f1.c", "a");
	if (fp == NULL)
	{
		printf("file vant open");
		return(1);
	}
	printf("enter a string");
	for (i=0;i!='\0';i++);
	fputc(p[i], fp);
	fclose(fp);
	return 0;

}

 */
 