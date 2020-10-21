#include<stdio.h>

int fac(int a)

{	
	if(a<=1)
	return 1;

	return a*fac(a-1);
}


int main(void)

{
	
	int b;
	printf("b를입력하세요");
	scanf("%d",&b);

	printf("fatorial b = %d\n",fac(b));

	return 0;
}

	

