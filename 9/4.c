#include<stdio.h>

int H(int a)

{	
	if(a<=1)
	return 1;

	return 2*H(a-1)+1;


}

int main(void)

{
	int a;
	printf("몇이궁금?");
	scanf("%d",&a);

	printf("%d\n",H(a));

	return 0;
}
