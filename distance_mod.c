#include<stdio.h>

int main(void)
{
	double distance = 149600000;
	double speed = 300000;
	double time;
	int time_int;
	int minutes;
	int seconds; 


	time = distance / speed;
	time_int = time;
	seconds = time_int%60;
	minutes = time_int/60;
	printf("%d분%d초\n",minutes,seconds);
	
	return 0;

}
	
