#include<stdio.h>
#define PI 3.14159

int main(void)

{	int radius = 5;
	int p_speed;
	int u_speed;
	double  time;
	double  round;
	round = PI * radius *2;
	
	
	
	printf("Type the speed\n");

	printf("panda speed:\n");
	scanf("%d",&p_speed);
	printf("horse speed:\n");
	scanf("%d",&u_speed);

 	time = round/(p_speed + u_speed);
	printf("시간:%lf\n",time);
	
	return 0;
} 


