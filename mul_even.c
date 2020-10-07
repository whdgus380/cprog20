#include<stdio.h>


int main(void)


{
	int n;
	printf("짝수구구단입니다");
	printf("\n원하시는단을입력하세요");
	scanf("%d",&n);
	for(int a=1;a<=10;a++)
		{
			printf("%5d %5d %5d\n",n,2*a,n*2*a);
		}

	return 0;
}
	
		
		
