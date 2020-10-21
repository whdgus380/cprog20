#include<stdio.h>


void three(int a)
{
	if(a<=0)
	return;
	printf("3 * %d = %d\n",a,3*a);

	return three(a-1);
}


int main()

{
	int a;
	printf("3단출력기입니다.몇까지출력합니까?");
	scanf("%d",&a);

	three(a);



	return 0;
}

