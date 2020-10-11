#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void dice()
{	
	int num;
	srand(time(NULL));
	num = rand()%10;
	if (num==0 ||num==1||num==2)
		printf("1\n");
	else{
		if (num==7 || num== 8||num==9)
		printf("2\n");
		else printf("%d\n", num);
	}
}	
	

int main()
{
	dice();

	return 0;

}

	
		
	





