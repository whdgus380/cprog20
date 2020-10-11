#include<stdio.h>
#include<math.h>

int is_prime(int);
int get_integer(void);
int main()

{


		int n,result;
		n = get_integer();
		result = is_prime(n);
	
		if(result == 1)
			printf("%d는소수입니다.\n",n);
		else
			printf("%d은 소수가아닙니다.\n",n);
		return 0;

}


int get_integer(void)
{
	int n;
	printf("정수를입력하시오:");
	scanf("%d",&n);
	return n;

}


int is_prime(int n)

{
	int divisors = 0,i;
	double s_n = sqrt(n);
	for (i= 1; i<=s_n; i++)
	{
		if (n%i== 0)
				divisors++;
	}
	return (divisors == 1);

}
