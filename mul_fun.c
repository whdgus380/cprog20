#include<stdio.h>

int get_mul(int a,int b)
{
	int mul;
	mul = a*b;
	return mul;
}
double get_div(double a,double b)
{	double div;
	div = a/b;
	return div; 
}

int get_sum(int a, int b)
{
	return a+b;
}

int get_diff(int a, int b)
{	int abs;
	if(a>b)
	abs = a-b;
	else 
	abs = b-a;
	return abs;
}	
	
int main(void)

{

	int a,b;
	printf("Type two integers:");
	scanf("%d %d", &a,&b);

	printf("sum =%d\n",get_sum(a,b));
	printf("diff =%d\n",get_diff(a,b));
	printf("mul =%d\n",get_mul(a,b));
	printf("div =%f\n",get_div(a,b));
	return 0;
}


	
