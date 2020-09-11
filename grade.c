#include<stdio.h>

int main(void)
{

	int all;
	double A;
	double B;
	double C;


	printf("총 학생수는?");
	scanf("%d",&all);
	
	A= all *0.2;
	B= all *0.8;
	C= all *0.8;

	printf("A:%lf\nB:%lf\nC:%lf\n",A,B,C);
	
	return 0;
}
