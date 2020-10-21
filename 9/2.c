#include<stdio.h>
#include<sys/time.h>
#define MAX_LIMIT 100

int main()

{

	
	struct timeval t_start, t_end;
	
    register long sum, i;
	long sum1, i1;


	gettimeofday(&t_start,NULL);
    sum = 0;
    for(i=0; i<10000000; i++)
        sum += i;
    
    printf("sum = %ld\n", sum);

	gettimeofday(&t_end,NULL);


	printf("%ld sec\n", (t_end.tv_sec - t_start.tv_sec +(t_end.tv_usec - t_start.tv_usec)));




	gettimeofday(&t_start,NULL);


    sum1 = 0;
    for(i1=0; i1<10000000; i1++)
        sum1 += i1;
    
    printf("sum = %ld\n", sum);

	gettimeofday(&t_end,NULL);
	printf("%ld sec\n", (t_end.tv_sec - t_start.tv_sec +(t_end.tv_usec - t_start.tv_usec)));
	return 0;

}

