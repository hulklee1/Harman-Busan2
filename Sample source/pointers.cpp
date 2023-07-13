#include <stdio.h>

func(int i, int j)
{
	return i+j;
}

main()
{
	char c;
	int i;
	float a;
	double d = 3.14;
	
	void *p = (void*)0x0006d000;
	int (*f)(int,int);
	printf("void * : 0x%08x  0x%08x ...\n", p++, p);
	
	p = &c; printf("  char : 0x%08x  0x%08x ...\n", p++, p);
	p = &i; printf("   int : 0x%08x  0x%08x ...\n", p++, p);
	p = &a; printf(" float : 0x%08x  0x%08x ...\n", p++, p);
	p = &d; printf("double : 0x%08x  0x%08x ...\n", p++, p);
	f = func; printf("func : 0x%08x  0x%08x ...\n", f++, f);
	
	p = &c; printf("Pointer access test (char * ==> double *) : %f\n",*((double*)(p-23)));
}
	
	
	
	
