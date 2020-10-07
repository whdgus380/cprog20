#include<stdio.h>

int main(void)

{
	int n;
	int i=1;
	printf("정수를 입력하세요");
	scanf("%d",&n);


	while(i<10)
	{
		printf("%d*%d=%d\n",n,i,i*n);
		i++;
	}


	return 0;
}

