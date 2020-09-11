#include<stdio.h>

int main(void)

{
	int height;
	int width;
	double area;

	printf("height?");
	scanf("%d",&height);

	printf("width?");
	scanf("%d",&width);

	area = height * width *0.5;

	printf("넓이:%lf\n",area);
	
	return 0;
}
