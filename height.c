#include<math.h>
#include<stdio.h>


double get_height()

{

	double a,d;
	double height,degree;
	printf("변a의길이는몇인가요?");
	scanf("%le",&a);
	printf("d의 각도는 몇인가요?");
	scanf("%le",&d);
	degree = d*3.14/180.0;
	height = sin(degree) * a;


	return height;

}

int main(void)

{
	double D;
	double sq_3=sqrt(3);
	D = get_height();
	printf("높이%lf\n ",D);
	return 0;

}

	 

	
