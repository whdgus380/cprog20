#include<stdio.h>
#include<math.h>

int main(void)

{

	double a,b,c,dis;

	printf("계수a를입력하시오:");
	scanf("%lf",&a);

	printf("계수b를입력하시오:");
	scanf("%lf",&b);
	
	printf("게수c를입력하시오:");
	scanf("%lf",&c);

	if(a==0 && b==0)
			printf("방정식의 근은%lf입니다.",c);
	else
	{ 
		if(a==0)
			{
				printf("근은 %lf입니다",-c/b);
			}
		else
		{
			dis = (b*b-4.0*a*c);
			if(dis>=0)
			{
				printf("방정식의근은%lf입니다.\n",(-b+sqrt(dis))/(2.0*a));
				printf("방정식의근인%lf입니다.\n",(-b-sqrt(dis))/(2.0*a));

			}	
			else
			{
		
					printf("실근이 없습니다\n");
			}
		}
	}	
	return 0;
}

