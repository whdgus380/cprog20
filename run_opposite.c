#include<stdio.h>
#define PI 3.14
int main(void)

{
	int p_speed;
	int h_speed;
	int radius = 5;
	double round;
	double time;

	printf("Type the number\n");
	printf("horse\n");
	scanf("%d",&h_speed);

	printf("panda\n");
	scanf("%d",&p_speed);

	round = radius * 2 * PI;

	time = round/(h_speed - p_speed);
	
	printf("시간:%lf\n",time);

	return 0;
}
	
