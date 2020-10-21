#include<stdio.h>

int rabbit(int a)
{
	if(a<=1)
	return 1;

	return rabbit(a-1) + rabbit(a-2);

}

int main()

{
	int a;
	printf("토끼,몇달궁금?");
	scanf("%d",&a);

	printf("%d달 후에 %d마리있습니다\n",a,rabbit(a));

	return 0;

}


