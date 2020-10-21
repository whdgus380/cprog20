#include<stdio.h>
#include<sys/time.h>

#define MAX_LIMIT 100

int main()
{
	struct timeval t_start1, t_end1, t_start2, t_end2;
	double time1,time2;
	register long sum, i;
	long sum1, i1;
	gettimeofday(&t_start1,NULL);


    sum = 0;
    for(i=0; i<10000000; i++)
        sum += i;
    
    printf("sum = %ld\n", sum);
//    return 0;

	gettimeofday(&t_end1, NULL);

	time1 = (t_end1.tv_sec - t_start1.tv_sec +(t_end1.tv_usec - t_start1.tv_usec)/1000000.0);
	printf("시간%f\n",time1);	




	gettimeofday(&t_start2,NULL);
	
	sum1=0;
	for(i=0; i<10000000; i++)
		sum1 += i;
	printf("sum = %ld\n",sum1);
	
	gettimeofday(&t_end2,NULL);

	time2 = (t_end2.tv_sec - t_start2.tv_sec +(t_end2.tv_usec - t_start2.tv_usec)/1000000.0);
    printf("시간%f\n",time2);

	
	

	return 0;
}

